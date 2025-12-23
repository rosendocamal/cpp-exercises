#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

main()
{
	int i;
	float num, suma;

	suma = 0;

	for (i = 1; i <= 0; i++)
	{
		printf("%d. Introduce un numero:\n", i);
		scanf("%f".&num);
		printf("Has introducido el número: %.2f\n\n",num);

		suma = suma + num;
	}

	printf("\n\nLa suma de los numeros introducidos es: %2.f", suma);

	return 0;
}
