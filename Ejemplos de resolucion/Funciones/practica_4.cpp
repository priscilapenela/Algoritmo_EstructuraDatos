#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

int potencial_desarrollo(int , int, int  );
void mostrar_cartel( int, int);

int main(){
    int cod, cant_dias, dia, f1, f2, f3, resul;
    int cont_fuera_nivel=0; 
    int ban=1; int maxdias, maxcod;
    char profesional[3];
    char continuar[3]={"si"};
    float calif_prom;
    
    while (!strcmp("si",continuar)){
    printf("\t\t\nIngrese codigo empleado: ");
    fflush(stdin);
    scanf("%d",&cod);
    printf("\t\t\nIngrese cantidad de dias trabajados: ");
    fflush(stdin);
    scanf("%d",&cant_dias);
    printf("\t\t\nIngrese profesional SI/NO: ");
    fflush(stdin);
    scanf("%s", profesional);
    printf("\t\t\nIngrese Cantidad y Calidad de trabajo: ");
    fflush(stdin);
    scanf("%d",&f1);
    printf("\t\t\nIngrese Cooperacion: ");
    fflush(stdin);
    scanf("%d",&f2);
      
    if (strcmp(profesional,"SI")==0) {
       printf("\t\t\nIngrese Capacidad de analisis y creatividad: ");
       fflush(stdin);
       scanf("%d",&f3);
       /* Tiene o no potencial de desarrollo empleados profesionales y muestra cartel */
        resul=potencial_desarrollo(f1,f2,f3); 
        mostrar_cartel(cod, resul);
         /* calificacion promedio empleados profesionales */ 
         calif_prom=(f1+f2+f3)/3; 
         if (calif_prom < 3) {cont_fuera_nivel++;}                            }
     else { f3=0;}         
    
    if (ban ==1) { ban =0; 
                   maxcod=cod;
                   maxdias=cant_dias; }
    else { if (cant_dias > maxdias)  { maxcod=cod; maxdias=cant_dias;}
         }          
             
    system("pause");
    system("cls");
    printf("\t\tContinua el dia, si/no?: ");
    fflush(stdin);
    gets(continuar);
    system("cls");
    }
    printf("\t\tTotal fuera de nivel: %d\n", cont_fuera_nivel);
    
    printf("\t\tCodigo de empleado de dias max: %d\n", maxcod);

    system("pause");
    }
 
 
int potencial_desarrollo( int fa, int fb, int fc)
{
      int resul;   
      
      if (fa>= 4 && fb>=4 && fc>=4) 
           {resul= 1;}
      else {resul=0;}
                        
      return resul;    
      }     

void mostrar_cartel (int codigo, int marca) {
  if (marca==1) {printf("El empleado %d\n" , codigo);
                printf(" TIENE POTENCIAL DE DESARROLLO"); }
        else {printf("El empleado %d\n", codigo);
              printf("NO TIENE POTENCIAL DE DESARROLLO"); }    
} 
