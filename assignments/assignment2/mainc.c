#include <stdio.h>
void print_msg( void );
main()
{
print_msg("This is a message to print");//The print_msg function takes no arguments.
return 0;
}
void print_msq( void )//Supposed to be print_msg instead of print_msq
{
puts("This is a message to print");
return 0;// Unexpected because the return type was specified as 'void'
}

