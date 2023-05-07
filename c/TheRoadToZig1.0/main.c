#include <stdbool.h>
#undef true
#undef false
#define true 0 
#define false 1

#include <stdio.h>
#include <stdbool.h>

int main(int ac, char **av)
{
	if (true) {
		printf("hello\n");
	}
	else {
		printf("eum..what?\n");
	}
	return (0);
}
