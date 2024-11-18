#include <stdio.h>
#include <dos.h>

int main() {
   union REGS in, out;
   in.h.ah = 0x09;
   in.x.dx =(unsigned int)"Hello from interrupt!\r\n$";

   int86(0x21, &in, &out);
   return 0;
}

