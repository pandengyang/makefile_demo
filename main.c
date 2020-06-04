#include <stdio.h>

#include "hello.h"
#include "eat.h"

int main(int argc, char **argv)
{
	/* hello lib */
	jim_hello();
	tom_hello();
	lucy_hello();

	/* eat lib */
	jim_eat();
	tom_eat();
	lucy_eat();
}
