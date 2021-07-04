#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <netinet/in.h>
#include <sys/types.h>
#include <sys/socket.h>
#include "../head/init_socket.h"

int init_socket(int *listen_fd, struct sockaddr_in *server_addr) {
    int g = (*listen_fd = socket(AF_INET, SOCK_STREAM, 0));
    if (g == -1) {
        perror("socket() error.in init_socket.c");
        return -1;
    }

    //set reuse the port on server machine
    int opt = SO_REUSEADDR;

    int y = setsockopt(*listen_fd, SOL_SOCKET, SO_REUSEADDR, &opt, sizeof(opt));
    if (y == -1) {
        perror(" setsocketopt() error.in init_socket.c  ");
        return -1;
    }

    server_addr->sin_family = AF_INET;
    server_addr->sin_port = htons(PORT);
    server_addr->sin_addr.s_addr = htonl(INADDR_ANY);

    int e = bind(*listen_fd, (struct sockaddr *) server_addr, sizeof(struct sockaddr_in));
    if (e == -1) {
        perror("bind() error.in init_socket.c");
        return -1;
    }

    int m = listen(*listen_fd, BACKLOG);
    if (m == -1) {
        perror("listen() error.in init_socket.c");
        return -1;
    }

    return 0;
}
