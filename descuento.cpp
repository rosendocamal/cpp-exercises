#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

main()
{
	float total_compra, descuento, total_pago;
	printf("Introduce el total de la compra: $");
	scanf("%f",&total_compra);
	if(total_compra > 1500)
		{
			descuento = total_compra * 0.25;
		}
	else
		{
			descuento = total_compra * 0.10;
		}
	total_pago = total_compra - descuento;
	printf("El cliente pagará con descuento: %.2f",total_pago);
	return 0;
}

