#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

main()
{
	float monto_compra, descuento, monto_pago;
	int option;
	printf("Introduzca el monto de compra: ");
	scanf("%f",&monto_compra);
	printf("Método de pago: (1) TARJETA, (2) EFECTIVO, (3) TRANSFERENCIA, (4) CHEQUE");
	scanf("%d",&option);
	switch(option)
	{
		case 1:
			descuento = monto_compra * 0.25;
			monto_pago = monto_compra - descuento;
			printf("El total a pagar es: %f", monto_pago);
			break;
		case 2:
			descuento = monto_compra * 0.15;
			monto_pago = monto_compra - descuento;
			printf("El total a pagar es: %f", monto_pago);
			break;
		case 3:
			descuento = monto_compra * 0.10;
			monto_pago = monto_compra - descuento;
			printf("El total a pagar es: %f", monto_pago);
			break;
		case 4:
			descuento = monto_compra * 0.05;
			monto_pago = monto_compra - descuento;
			printf("El total a pagar es: %f", monto_pago);
			break;
		default:
			printf("Opción no válida");
	}
	return 0;
}
