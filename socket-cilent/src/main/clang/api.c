#include "../declare/DeclareLib.h"

void demo() {
    char buf[1024];

    char status[] = "HTTP/1.0 200 OK\r\n";
    char header[] = "Server: DWBServer\r\nContent-Type: text/html;charset=utf-8\r\n\r\n";;
    char body[] = "<html><head><title>C语言构建小型Web服务器</title></head><body><div class='h-t'><h2>欢迎</h2></div><div class='c-t'><p>Hello，World</p></div></body></html>";
    /*
     * int socket(int domain, int type, int protocol);
     * 返回一个socket描述符（socket descriptor），它唯一标识一个socket，这个socket描述字跟文件描述字一样;
     *
     * domain:域，可传的值为AF_UNIX、AF_LOCAL、AF_INET，AF意为Adress Family。前两个为本机操作，最后一个为IPv4的网络操作，所以为AF_INET
     *
     * type:类型，可传值为SOCK_STREAM、SOCK_DGRAM、SOCK_PACKET等
SOCK_STREAM 使用 TCP 协议传输数据，SOCK_DGRAM 使用 UDP 协议传输数据，我们要做的是Web服务器，肯定是选择面向连接的可靠的TCP协议，所以这个值传SOCK_STREAM
     *
     * protocol:
所用的协议，有IPPROTO_TCP、IPPTOTO_UDP、IPPROTO_SCTP，传0为自动选择协议，所以我们传0
     * */
    int server_socket = socket(AF_INET, SOCK_STREAM, 0);

    struct sockaddr_in server_addr;

    memset(&server_addr, 0, sizeof(server_addr));
    server_addr.sin_family = AF_INET;
    //INADDR_ANY表示任何网络地址都可以访问
    server_addr.sin_addr.s_addr = htonl(INADDR_ANY);
    server_addr.sin_port = htons(PORT);

    //将socket和地址绑定,返回值:绑定成功或者失败的消息码，暂时不作处理
    bind(server_socket, (struct sockaddr *) &server_addr, sizeof(server_addr));

    //监听,返回值:绑定成功或者失败的消息码，暂时不作处理
    listen(server_socket, 5);

    /*与客户端建立连接,返回值:
socket文件描述符，在与客户端建立连接后，accpet还是会生成一个专门用于和当前客户端通信的socket，而原来那个socket照常负责和其他等待建立连接的客户端建立通信*/
    int client_socket = accept(server_socket, NULL, NULL);

    /*从浏览器读取请求内容
     * ssize_t read(int fd, void *buf, size_t count);
     * fd:文件描述符，从哪个文件读;buf：读的内容存到buf中;count:共读多少个字节
     * */
    read(client_socket, buf, 1024);
    printf("buf:\n%s", buf);

    /*ssize_t write(int fd, const void *buf, size_t count):往浏览器写响应内容.
     * 写的格式是按HTTP协议响应报文的格式写的，响应报文的格式为响应行+响应首部+响应体，注意响应首部和响应体之间有一个空行
     * */
    write(client_socket, status, sizeof(status));
    write(client_socket, header, sizeof(header));
    write(client_socket, body, sizeof(body));

    /*最后把两个socket全部关闭*/
    close(client_socket);
    close(server_socket);

}


