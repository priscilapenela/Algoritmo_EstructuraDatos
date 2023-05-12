#include<stdio.h>
#include<string.h>
#include<math.h>
//Prototipos 
float precio(char v, char estadia, float t);   
void contadores(int c_c, int c_a, int c_m);
int main()//Funcion principal
{
    char patente[8], vehiculo, r, estadia;
	float tiempo=0.0, total=0.0;
	int cont_c=0, cont_a=0, cont_m=0;
	
	printf("Desea ingresar vehiculo? Ingrese S(si) o N(no)\n");
	scanf("%c", &r);
	fflush(stdin);
	
	while (r!='N')//Ciclo repetitivo hasta que el usuario ingrese "No"
	{
		printf("Ingrese numero de patente:\n"); 
		gets(patente);
		fflush(stdin);//Limpieza del Buffer (importante!)
		
		printf("\nIngrese tipo de vehiculo (c=camioneta, a=auto, m=moto)\n");
		scanf("%c", &vehiculo);
		fflush(stdin);
		
		printf("\nEl cliente paga por estadia? Ingrese S(si) o N(no)\n"); /*El pago por estadia es mas barato que por una "x" cantidad de horas*/
		scanf("%c", &estadia);
		fflush(stdin);                                                         
		
		if(estadia=='S')
		{
			switch (vehiculo)
			{
			case 'c': cont_c++; //Se acrecenta cada vez que pasa por acá
		    break;     
		    case 'a': cont_a++;
		    break;
	        case 'm': cont_m++;
	        break;
			}
			
			total=precio(vehiculo,estadia,tiempo);
		}
		else
		{
			printf("Ingresar cantidad de horas:\n");
			scanf("%f", &tiempo);
			fflush(stdin);
			
			total=precio(vehiculo,estadia,tiempo);
		}
		
		printf("\nEl gasto de estacionamiento a pagar sera:%.2f\n", total);
		
		printf("\nDesea ingresar otro vehiculo? Ingrese S(si) o N(no)\n");
	    scanf("%c", &r);
	    fflush(stdin);
	    
	    system("cls");
	}
	
	contadores(cont_c,cont_a,cont_m);
	
	system("pause");
	return 0;
}
 float precio(char v, char est, float t)
{
	float gasto;
	
	switch (v)
	{
		case 'c': if(est=='S')
		          {
		          	gasto=500;
				  }
				  else
				  {
				  	gasto=t*200;
				  }
	    break;
		case 'a': if(est=='S')	
			      {
			       	gasto=300;
				  }
				  else 
				  {
				  	gasto=t*100;
				  }
		break;
		case 'm': if(est=='S')
		          {
		          	gasto=200;
				  }
				  else 
				  {
				  	gasto=t*50;
				  }	
		break;	  
	}

	return gasto;
}
void contadores(int c_c, int c_a, int c_m) //Se muetra una vez que no se registran mas vehiculos
{
	printf("Cantidad de estadia de camionetas=%d\n", c_c);
	printf("Cantidad de estadia de autos=%d\n", c_a);
	printf("Cantidad de estadia de motos=%d\n", c_m); 
	
	return;      
}

