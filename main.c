#include <stdint.h>
#include <stdio.h>
#include <gb/gb.h>

void main()
{
  // Loop forever
  while (1) {
    // Game main loop processing goes here
    printf("hello GAME BOY!\n");

    // Done processing, yield CPU and wait for start of next frame
    wait_vbl_done();
  }
}
