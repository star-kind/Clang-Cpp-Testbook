#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#include "../head/total_declaration.h"

int webserver() {
    int listen_fd;
    int connect_fd;
    struct sockaddr_in server_addr;
    struct sockaddr_in client_addr;
    pid_t pid;

    bzero(&server_addr, sizeof(struct sockaddr_in));
    bzero(&client_addr, sizeof(struct sockaddr_in));

    if (init_socket(&listen_fd, &server_addr
    ) == -1) {
        perror("init_socket() error.in webserver.c");
        exit(EXIT_FAILURE);
    }

    socklen_t addrlen = sizeof(struct sockaddr_in);

    while (1) {
        if ((connect_fd = accept(listen_fd, (struct sockaddr *) &client_addr, &addrlen)) == -1) {
            perror("accept() error.in webserver.c");
            continue;

        }

        if ((pid = fork()) > 0) {
            close(connect_fd);
            continue;
        } else if (pid == 0) {
            close(listen_fd);

            printf("pid %d process http session from : %s ", getpid(), inet_ntoa(client_addr.sin_addr),
                   htons(client_addr.sin_port));

            if (http_session(&connect_fd, &client_addr) == -1) {
                perror("http_session () error.in webserver.c");
                shutdown(connect_fd, SHUT_RDWR);
                printf("pid %d loss connection to %s \n", getpid(), inet_ntoa(client_addr.sin_addr));
//exit from child process,stop this http session
                exit(EXIT_FAILURE);
            }

            printf("pid %d close connection to %s \n ", getpid(), inet_ntoa(client_addr.sin_addr));
            shutdown(connect_fd, SHUT_RDWR);
            exit(EXIT_FAILURE);

        } else {
            perror("fork() error.in webserver.c");
            exit(EXIT_FAILURE);
        }

    }

    shutdown(listen_fd, SHUT_RDWR);
    return 0;
}
