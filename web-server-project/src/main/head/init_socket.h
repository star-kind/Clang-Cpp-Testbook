#include <netinet/in.h>

/* length of listening queue on socket */
#define BACKLOG 20

/* web server listening port */
#define PORT 8081

/* initialize the socket on server, include below
   socket();
   bind();
   listen();
*/

/** listen_fd : the web server listen file decriptor
   server_addr: the web server ipv4 address
   RETURNS: success on 0, error on -1
*/
int init_socket(int *listen_fd, struct sockaddr_in *server_addr);
