/* Cynthia Itzel Ochoa Manzo 
   José Eduardo Mora Esparza*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h> 
#include <locale.h>
#include <iostream>


int main()
{
    
    // Comenzamos inicializando las variables 
	int br[100];
	int papa[50];
	int mama[50];
	int hijas[50];
	int i=0;
	int x=0;
	int cont=0;
	int porce=0;
	int a=0;
	int blanc=0;
	int rojo=0;
	int ama=0;
	
	
	setlocale(LC_ALL, "");  // Ponemos setlocale para que el programa acepte idioma español
	
	srand( time( 0 ) );       // para generar los 100 elementos aleatorios
   for ( i = 0; i <100; i++ )   
      br[ i ] =1+  rand()  % 2;  // Que solo sean numero 1 y 2
   
   for(i=0; i<50; i++)       
   {
   		papa[i]=br[i];      
   }                     
                              // Estos for nos ayudan a separar las flores blancas y las rojas para
   for(i=50; i<100; i++)     // imprimirlas en pares para poder hacer la mutación de las flores
   {
   		if(x<50)
   		{
   	    	mama[x]=br[i];
   	    	x++;
   		}
   }

   printf("\n");
   SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),14);
   printf("Pares\n\n");                                             
   SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),15);
   
   for(i=0;i<50;i++)                      // Impresión para identificar los pares separados por los for anteriores
   {
   		if(papa[i]==1)
   			printf("Flor Blanca  ");
   		else 
   			printf("Flor Roja  ");
   			if(mama[i]==1)
   			printf("Flor Blanca  ");
   		else 
   			printf("Flor Roja  ");
		printf("\n");	   		
   }
   
   	system("pause");                  // system("pause") y system("cls") para limpiar pantalla e identificar nuevos datos
   	system("cls");
   	
   for(i=0;i<50;i++)                        // For para sacar las hijas dependiendo de las parejas de las flores
   {
   		if(papa[i]==1&&mama[i]==1)
   			hijas[i]=1;
   		if(papa[i]==1&&mama[i]==2)
   			hijas[i]=1;
   		if(papa[i]==2&&mama[i]==1)
   			hijas[i]=1;
   		if(papa[i]==2&&mama[i]==2)
   			hijas[i]=2;	
   }
   printf("\n");
   SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),14);
   printf("Funcion de cruzar cada par\n\n");
   SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),15);
   for ( i = 0; i < 50; i++ ){                               // For para imprimir las hijas de las parejas del anterior for
     if(hijas[i]==1)
   			printf("Flor Blanca  ");
   		else 
   			printf("Flor Roja  ");
   		printf("\n");	
   }
   
   	system("pause");
   	system("cls");
   
   for ( i = 0; i < 50; i++ ){              // For para sacar el número de hijas rojas
      if(hijas[i]==2)
      {
      	cont++;
       }
       
   }
   porce=cont*0.20;                      // For para sacar el porcentaje de las hijas rojas y mutar a flores amarillas
   for ( i = 0; i < 50; i++ ){
     if(hijas[i]==2&&a<porce)
     {
     	hijas[i]=3;
     	a++;
	 }
   }
   
   printf("\n");
   SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),14);
   printf("Hijas mutadas\n\n");
   SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),15);
   
   for ( i = 0; i < 50; i++ ){               // Impresión de las hijas mutadas
     if(hijas[i]==1)
   			printf("Flor Blanca  ");
   		else if (hijas[i]==2)
   			printf("Flor Roja  ");
   		else if (hijas[i]==3)
   			printf("Flor Amarilla  ");
   		printf("\n");	
   }
   
   system("pause");
   system("cls");
   
   for(i=0; i<50; i++)       // For para contabilizar el total de todas las hijas
   {
   		if(hijas[i]==1)
   			blanc++;
   		else if (hijas[i]==2)
   			rojo++;
   		else if (hijas[i]==3)
   			ama++;
   }
   printf("\n");
    SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),9);         // Impresión del total de las hijas
    printf("Total\n\n");
    SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),15);
   	printf("\nTotal flores blancas:  %d", blanc);
   	SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),4);
   	printf("\nTotal flores rojas:  %d", rojo);
   	SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),15);
   	SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),14);
   	printf("\nTotal flores amarillas:  %d", ama);
    SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),15);

}


