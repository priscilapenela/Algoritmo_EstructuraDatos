#include<stdio.h>
#include<stdlib.h>

//5. REALIZAR FUNCI�N QUE TOME DOS N�MEROS REALES COMO PAR�METROS Y DEVUELVA UN
//N�MERO REAL QUE SER�A LA MEDIA DE LOS DOS N�MEROS.


float promedio (float num1,float num2)
{float calculo;
calculo=(num1+num2)/2;
return calculo;
}

main (){
	float num1,num2,resultado;
printf("Ingrese el primer numero real \n");
scanf("%f",&num1);
printf("Ingrese el segundo numero real \n");
scanf("%f",&num2);
resultado=promedio(num1,num2);

printf("El promedio de los dos numeros es: %.2f \n ",resultado);
}


