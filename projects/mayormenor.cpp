#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

main()
{
	int edad;
	printf("Teclea la edad de la persona: ");
	scanf("%d",&edad);
	if(edad>=18)
		{
			printf("Es mayor de edad");
		}
	else
		{
			printf("Es menor de edad");
		}
	return 0;
}
