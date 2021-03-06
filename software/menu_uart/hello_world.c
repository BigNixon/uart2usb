/*
 * "Hello World" example.
 *
 * This example prints 'Hello from Nios II' to the STDOUT stream. It runs on
 * the Nios II 'standard', 'full_featured', 'fast', and 'low_cost' example
 * designs. It runs with or without the MicroC/OS-II RTOS and requires a STDOUT
 * device in your system's hardware.
 * The memory footprint of this hosted application is ~69 kbytes by default
 * using the standard reference design.
 *
 * For a reduced footprint version of this template, and an explanation of how
 * to reduce the memory footprint for a given application, see the
 * "small_hello_world" template.
 *
 */

#include <stdio.h>

int main()
{
  printf("Hello from Nios II!\n\r");
  int op=-1;
  do{
	  printf("seleccione una ocion\n\r");
	  printf("1) 1   s	\n\r");
	  printf("2) 500 ms	\n\r");
	  printf("3) 200 ms	\n\r");
	  printf("4) 100 ms	\n\r");
	  printf("5) salir \n\r");
	  scanf("%d",&op);

	  printf("seleccionaste la opcion -%d-\n\r",op);

  }while(op!=5);

  printf("Saliendo\n\r");
  return 0;
}
