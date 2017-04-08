#ifndef TCP_SERVER_H
#define TCP_SERVER_H
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>

#include <unistd.h>  /* UNIX standard function definitions */
#include <fcntl.h>   /* File control definitions */
#include <errno.h>   /* Error number definitions */
#include <termios.h> /* POSIX terminal control definitions */

using namespace std;

class SerialCOM
{
public:
    SerialCOM();
    int init(char* filename);

};

#endif // TCP_SERVER_H
