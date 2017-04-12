#ifndef TCP_SERVER_H
#define TCP_SERVER_H

#include<stdio.h>
#include<string.h>    //strlen
#include<sys/socket.h>
#include<arpa/inet.h> //inet_addr
#include<unistd.h>    //write
#include <stdint.h>

class tcp_server
{
public:
    tcp_server();
    int init();
    uint32_t port;

};

#endif // TCP_SERVER_H
