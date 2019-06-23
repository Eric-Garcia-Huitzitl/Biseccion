#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char *argv[]) {
	float a=1,b=0,tol=0,p=0,p1=0,funcion=0,funcion2=0; 
	int i=0,num=0;
	printf("            \n\n                                    Metodo de Biseccion....\n ");
	printf("____________________________________________________________________________________________\n\n");
	while(b<a)
	{
	printf("\n\n      Dame el extremo a :    ");
	scanf("%f",&a);
	printf("\n      Dame el extremo b :    ");
	scanf("%f",&b);
	if(b<a){system("cls");printf("\nEl numero b no puede ser mayor al numero a");}
	}
	printf("\n      Dame la tolerancia : ");
	scanf("%f",&tol);
	printf("\n      Numero de iteraciones : ");
	scanf("%d",&num);
	
	
	
	i=i+1;
		printf("\n\n*****************************Tabla de Resultados:******************************************** \n\n____________________________________________________________________________________________\n");
		printf("||      a   ||        b     ||       p      ||       f(p)      ||       f(b)       ||\n\n");
		while(i<=num)
		{
		p1=((b-a)/2);
		p=a+((b-a)/2);
		funcion= ((p*p*p)-(2*p*p)-5);
		if(p1<tol||funcion==0)
		{
			printf("a: %f ||",a);
			printf("  b: %f ||",b);
			printf("  p= %f ||",p);
			printf("  f(p): %f ||",funcion);
			printf("  f(b): %f ||\n",funcion2);
			printf("____________________________________________________________________________________________");
			printf(" \n\n           *********  Termino el programa con: %f  **********\n\n",p);
			system("pause");
		break;
		}
		i++;
		printf("a: %f ||",a);
		printf("  b: %f ||",b);
		printf("  p= %f ||",p);
		printf("  f(p): %f ||",funcion);
		
		funcion2= ((a*a*a)-(2*a*a)-5);
		printf("  f(b): %f ||\n",funcion2);
		printf("____________________________________________________________________________________________");
		printf("   \n");		
		if((funcion*funcion2)>0)
		{
			a=p;
	    }
		else{b=p;}
	/*Noota si llega un punto en el cual  a se acerca a p ó b se acerca a p es posible que el intervalo que proporcionaste no tenga raiz*/
		}
	return 0;
}


