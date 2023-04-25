#include <iostream>
#include "lib.h"
#include "local.h"

int	main(void)
{
	int i = 2;
	i = compute(i);
	i = localCompute(i);
	std::cout << i << std::endl;
	return (0);
}
