#include <stdio.h>

//int function(char *);

int main ()
{
#ifdef USE_SYSCALL
		write(1, "Hello System Call", 17);
#else
		printf("Hello World");
#endif
//	function( "Hello World\n" );
	return 0;
}
