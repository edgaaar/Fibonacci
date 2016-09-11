#include "Fibonacci.h"

Fibonacci::Fibonacci(void)
{}

unsigned int Fibonacci::itera(int n)
{
	for (int i = 0; i <= n-1; ++i)
	{
		c = a + b;
		b = a;
		a = c;
	}
	return b;
}

unsigned int Fibonacci::recursa(int n)
{
	if(n < 2)
	return n; 
	else
	return recursa(n-1) + recursa(n-2);	
}

