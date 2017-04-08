#include "serial.h"

SerialCOM::SerialCOM()
{

}

int SerialCOM::init(char *filename)
{
    if(filename == NULL)
    {
        puts("cannot found FileName serial port");
        return -1;
    }

    /*
     * 'open_port()' - Open serial port 1.
     *
     * Returns the file descriptor on success or -1 on error.
     */
    {
      int fd; /* File descriptor for the port */


      fd = open(filename, O_RDWR | O_NOCTTY | O_NDELAY);
      if (fd == -1)
      {
       /*
        * Could not open the port.
        */

        perror("open_port: Unable to open /dev/ttyf1 - ");
      }
      else
        fcntl(fd, F_SETFL, 0);

      return (fd);
    }

}
