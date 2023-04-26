#include "uart.h"

unsigned char string_buffer[100] = "eslam ahmed ";

void main ()
{
	Uart_send_string(string_buffer);
}