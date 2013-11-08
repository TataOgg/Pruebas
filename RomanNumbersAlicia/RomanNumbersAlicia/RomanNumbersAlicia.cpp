// RomanNumbersAlicia.cpp: 
//
#include <string>
#include "RomanNumbersAlicia.h"
#include <iostream>

int valueOfTheChar(char input)
{
	switch(input)
	{
		case 'I': return 1;
		case 'V': return 5;
		case 'X': return 10;
		case 'L': return 50;
		case 'C': return 100;
		case 'D': return 500;
		case 'M': return 1000;
		default: return -1;
	}

}

int converts(std::string input)
{
	int i=input.length()-1;
	int resultado=valueOfTheChar(input[i]);
	
	for(i;i>=1;i--)
	{
		int cifraActual=valueOfTheChar(input[i-1]);
		int cifraAnterior=valueOfTheChar(input[i]);
		if(esSuma(cifraActual, cifraAnterior))
			resultado+=cifraActual;
		else
			resultado-=cifraActual;
	}
	return resultado;
}

bool esSuma(int cifraActual, int cifraAnterior)
{
	return cifraActual>=cifraAnterior;
}



int main()
{
	std::string input;
	std::cout << "Introduce un número romano: \n";
	std::cin >> input;
	std::cout << "El número en decimal es: " << converts(input);
	return 0;
}