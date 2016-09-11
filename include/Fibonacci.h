#include <iostream>

class Fibonacci
{
public:
	int n = 0;
	unsigned int a = 1;
	unsigned int b,c = 0;
public:
	Fibonacci();
	unsigned int itera(int n);
	unsigned int recursa(int n);
};