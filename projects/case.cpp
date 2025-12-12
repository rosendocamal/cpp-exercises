#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main()
{
	int num1, num2, suma, resta, multi, opcion;
	float div;
	printf("Escribe el numero 1: ");
	scanf("%d",&num1);
	printf("Escribe el numero 2: ");
	scanf("%d",&num2);
	printf("Escoge una opción: (1) SUMA, (2) RESTA, (3) MULTIPLICACIÓN, (4) DIVISIÓN");
	scanf("%d",&opcion);
	switch(opcion)
	{
		case 1:
			suma = num1 + num2;
			printf("La suma de los dos numeros es: %d",suma);
			break;
		case 2:
			resta = num1 - num2;
			printf("La resta de los dos numeros es:%d", resta);
			break;
		case 3:
			multi = num1 * num2;
			printf("La multiplicacion de los dos numeros es: %d", multi);
			break;
		case 4:
			div = num1 / num2;
			printf("La division de los dos números es: %f", div);
			break;
		default:
			printf("Opción no válida");
	}
	return 0;
}
