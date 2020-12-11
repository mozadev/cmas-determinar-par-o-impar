/*
Escribir un programa en C++ que teniendo como dato de entrada un número entero,
determine si el número es par o impar.
Ejemplo
Ingrese un número entero: 364
Es un número par

*/


#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<stdio.h>
#include<math.h>

using namespace std;


	int main()
	{

	    float numero;
		int numero2;

		cout << "Ingrese numero entero: "; cin >> numero;
		numero2 = numero;
		if (numero - numero2 != 0)
		{
			cout << "error al ingresar el numero entero!"; exit(0);
		}
		
		
		else 
			if(numero2 % 2 == 0)
			cout << "el numero es par";
			else 
				cout << "el numero no es impar";
		
		_getch();
	}












