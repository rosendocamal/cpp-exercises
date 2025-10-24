#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
main()
{
	// Declaración de variables
	float celsius, kelvin, fahrenheit, rankine;
	//Leer los grados celsius
	printf("Ingrese la temperatura en grados Celsius: ");
	scanf("%f,&celsius");
	//operaciones
	fahrenheit = (celsius * 9/5) + 32;
	kelvin = celsius + 273.15;
	rankine = (celsius * 9/5) + 491.67;
	// Mostrar resultados
	printf("Los grados Celsius convertidos a Fahrenheit son: %.2f\n",fahrenheit);
	printf("Los grados Celsius convertidos a Kelvin son: %.2f\n",kelvin);
	printf("Los grados Celsius convertidos a Rankine son: %.2f\n",rankine);
	return 0;

}
