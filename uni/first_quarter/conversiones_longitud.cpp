#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
main()
{
	// Declaración de las variables
	float metros, pulgadas, pies, yardas, kilometros, millas;
	// Leer la cantidad de metros
	printf("Ingrese la longitud en metros: ");
	scanf("%f",&metros);
	// Conversiones
	pulgadas = metros * 39.37;
	pies = metros * 3.281;
	yardas = metros * 1.094;
	kilometros = metros / 1000;
	millas = metros / 1609;
	// Mostrar resultados
	printf("La longitud en metros convertidos a pulgadas es: %.2f\n",pulgadas);
	printf("La longitud en metros convertidos a pies es: %.2f\n",pies);
	printf("La longitud en metros convertidos a yardas es: %.2f\n",yardas);
	printf("La longitud en metros convertidos a kilometros es: %.2f\n",kilometros);
	printf("La longitud en metros convertidos a millas es: %.2f\n",millas);
	return 0;
}
