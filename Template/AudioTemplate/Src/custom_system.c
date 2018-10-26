#include  <errno.h>
#include  <sys/unistd.h> // STDOUT_FILENO, STDERR_FILENO
#include "usbd_cdc_if.h"

int _write(int file, char *data, int len)
{
//   if ((file != STDOUT_FILENO) && (file != STDERR_FILENO))
   {
//      errno = EBADF;
//      return -1;
   }

   CDC_Transmit_HS(data, len);

   // return # of bytes written - as best we can tell
   return len;
}
