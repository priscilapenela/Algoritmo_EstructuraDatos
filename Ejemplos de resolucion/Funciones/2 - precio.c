#include <stdio.h>
#include <stdlib.h>
float precio(float base, float impuesto) /* definición de la funcion precio */
{
	float calculo;
	calculo = base + ((base * impuesto)/100);
	return calculo;
}
main()
{
	float importe, tasa, resultado;
	printf("Ingrese el porcentaje del IVA: ");
	scanf("%f",&tasa);
    printf("\n\nIngrese el precio sin IVA: ");
    scanf("%f",&importe);
    /* resultado=precio(importe, tasa); Puedo guardar en una variable el resultado de la función*/
	printf("\n\nEl precio a pagar es: %.2f\n", precio(importe, tasa)); // invocación o llamada a la función
	//	printf("\n\nEl precio a pagar es: %.2f\n", resultado;
	system("pause");
	return 0;
}

