/* main.c
 *
 * Boring `putchar(getchar())` loop
 * 
 * Filename: main.c
 * Description: 
 * Author:       Max McLennan (mpmclenn)
 *               Won Yong Ha  (woha)
 * Maintainer: 
 * Created: Thu Jan 10 11:23:43 2013
 * Last-Updated: 4/5/2016
 *           By: Max McLennan (mpmclenn)
 *               Won Yong Ha  (woha)
 *     Update #: 0
 * Keywords: 
 * Compatibility: 
 * 
 */

/* Commentary: 
 * 
 * 
 * 
 */

/* Change log:
 * 
 * 
 */
/* Code: */

#include <stm32f30x.h>  // Pull in include files for F30x standard drivers 
#include <f3d_led.h>
#include <f3d_user_btn.h>
#include <f3d_uart.h>
#include <f3d_systick.h>
#include <queue.h>
#include <stdio.h>


int main(void) { 
  setvbuf(stdin, NULL, _IONBF, 0);
  setvbuf(stdout, NULL, _IONBF, 0);
  setvbuf(stderr, NULL, _IONBF, 0);

  f3d_uart_init();
  f3d_user_btn_init();
  f3d_led_init();
  f3d_systick_init();

  f3d_led_all_off();

  while(1) {
    putchar(getchar());
    //printf("hi\n");
  }
}

#ifdef USE_FULL_ASSERT
void assert_failed(uint8_t* file, uint32_t line) {
/* Infinite loop */
/* Use GDB to find out why we're here */
  while (1);
}
#endif

/* main.c ends here */
