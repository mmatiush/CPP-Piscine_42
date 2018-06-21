#include <iostream>

void		foo(unsigned n) {
	std::cout << "n - " << n << std::endl;
}

int		main(void) {
	unsigned n1 = 10;
	unsigned n2 = 15;
	int n3;

	foo(-2);

	std::cout << n1 - n2 << std::endl;
	n3 = n1 - n2;
	std::cout << n3 << std::endl;
}