#include "Fibonacci.h"

int main()
{
	Fibonacci f = Fibonacci();
	int n;
	std::cout<<"Escribe un número: ";
	std::cin >> n;
	std::cout<< "iteración: "<<f.itera(n)<<std::endl;
	std::cout<< "recursividad: "<<f.recursa(n)<<std::endl;

	return 0;
}