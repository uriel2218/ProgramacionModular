#include <stdio.h>
#include <math.h>

/*

	UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO

	FACULTAD DE CONTADURÍA Y ADMINISTRACIÓN

	LICENCIATURA EN INFORMÁTICA

	*****  PROYECTO FINAL PARA LA MATERIA "DISEÑO E IMPLEMENTACIÓN DE ALGORITMOS"  *****
	
	ELABORÓ: URIEL SOLALÍNDEZ AGUILAR

	PROFESORA ANGIE AGUILAR DOMINGUEZ

	FECHA DE ENTREGA: 28 DE NOVIEMBRE DEL 2022

*/


//PROGRAMA TRIANGULO

//Calcular la hipotenusa
void hipotenusa() 
{
	int co, ca;
	float h;
	printf("Escribe la longitud del cateto adyacente: ");
	scanf("%d",&co);
	printf("Escribe la longitud del cateto opuesto: ");
        scanf("%d",&ca);
	h = sqrt(co*co+ca*ca);
	printf("La hipotenusa mide: %f\n",h);
}

//Calcular el area
void areaT()
{
	int base, alt;
	float a;
	printf("Escribe la base: ");
	scanf("%d",&base);
	printf("Escribe la altura: ");
        scanf("%d",&alt);
	a = base*alt/2;
	printf("El area del triangulo es: %f\n", a);
}

//Calcular el tercer angulo
void angulo()
{
	float a1,a2,a3;
	printf("Escribe el valor de los 2 angulos: ");
	scanf("%f%f",&a1,&a2);
	a3 = 180-(a1+a2);
	printf("El tercer angulo mide: %f\n", a3);
}

void triangulo()
{
	int opco;
	printf("1) Hipotenusa de un triangulo rectangulo\n");
	printf("2) Area de un triangulo\n");
	printf("3) Tercer angulo de un triangulo\n");
	printf("Elige una opcion: ");
	scanf("%i",&opco);

	switch(opco)
	{
		case 1: hipotenusa();
			 break;
		case 2: areaT();
			 break;
		case 3: angulo();
			 break;
		default: printf("Error, por favor intente de nuevo\n");
			 break;
	}

}



//PROGRAMA CUADRADOS

//Calcular el area de un cuadrado
void area()
{
        int lado;
        float a;
        printf("Escribe el tamaño del lado: ");
        scanf("%d",&lado);
        a = lado*lado;
        printf("El area del cuadrado es: %.2f\n", a);
}

//Calcular el perimetro de un cuadrado
void perimetro()
{
	int lado2;
        float p;
        printf("Escribe el valor del lado: ");
        scanf("%d",&lado2);
        p = lado2+lado2+lado2+lado2;
        printf("El perimetro mide: %.2f\n", p);
}

//Calcular el area de un rectangulo
void areaRectangulo()
{
        int base, alt;
        float r;
        printf("Escribe el lado mayor (base): ");
        scanf("%d",&base);
        printf("Escribe el lado menor (altura): ");
        scanf("%d",&alt);
        r = base*alt;
        printf("El area del cuadrado es: %.2f\n", r);
}

//Calcular el area de un trapecio
void areaTrapecio()
{
        int baseMayor, baseMenor, alturaT;
        float t;
        printf("Escribe la base mayor: ");
        scanf("%d",&baseMayor);
        printf("Escribe la base menor: ");
        scanf("%d",&baseMenor);
	printf("Escribe la altura: ");
        scanf("%d",&alturaT);
        t = (baseMayor+baseMenor/2)*alturaT;
        printf("El area del cuadrado es: %.2f\n", t);
}

void cuadrados()
{
        int opca;
        printf("1) Area de un cuadrado\n");
        printf("2) Perimetro de un cuadrado\n");
	printf("3) Area de un rectangulo\n");
	printf("4) Area de un trapecio\n");
        printf("Elige una opcion: ");
        scanf("%i",&opca);

        switch(opca)
        {
                case 1: area();
                          break;
                case 2: perimetro();
                          break;
		case 3: areaRectangulo();
			  break;
		case 4: areaTrapecio();
			  break;
		default: printf("Error, por favor intente de nuevo\n");
                         break;
        }
        
}

//PROGRAMA MATRICES1

void matrizcoe(int t,int a[][10], int b[][10]){

for (int i=0; i<t; i++){

for (int j=0; j<t; j++){

printf("Introduce el valor del la coordenada [%i],[%i] en la matriz a: ",i, j);
scanf ("%i", &a[i][j]);
printf("Introduce el valor del la coordenada [%i],[%i] en la matriz b: ",i, j);
scanf ("%i", &b[i][j]);

		} 
	} 
}

void sumacoe(int t,int a[][10], int b[][10], int c[][10]){


for (int i=0; i<t; i++){

for (int j=0; j<t; j++){

c[i][j] = a[i][j] + b[i][j]; 

		}
 
	} 

}

void matrices1(){

int t, a[10][10], b[10][10], c[10][10];
printf ("Escribe la magnitud que quieres que tenga tu matriz cuadrada resultante: ");
scanf ("%i", &t);
matrizcoe(t,a,b);
sumacoe(t, a, b, c);
for(int i=0; i<t; i++){

for(int j=0; j<t; j++){

printf ("%i\t", c[i][j]);
}
printf("\n");
}

}


//PROGRAMA MATRICES2


void matrices2()
{
    
    float a11, a12, a21, a22;               
    float b11, b12, b21, b22;               
    float posicion11, posicion12, posicion21, posicion22; 
   

    
    printf("Multiplicacion de 2 matrices de 2x2 ");
    
    printf("\n\nTeclea la primera matriz dando la fila 1 y luego la fila 2 (valores de corrido dejando un espacio entre cada uno): ");
    scanf("%f %f %f %f", &a11, &a12, &a21, &a22);
    
    printf("\n\nTeclea la segunda matriz dando la fila 1 y luego la fila 2 (valores de corrido dejando un espacio entre cada uno): ");
    scanf("%f %f %f %f", &b11, &b12, &b21, &b22);
    
//CALC

    posicion11 = (a11*b11) + (a12*b21);
    posicion12 = (a11*b12) + (a12*b22);
    posicion21 = (a21*b11) + (a22*b21);
    posicion22 = (a21*b12) + (a22*b22);
    
//RESULTADOS
    
    printf("\n\nLa matriz resultante es como se presenta a continuacion:\n\n");
    printf("(posicion11 = %f posicion12 = %f)\n(posicion21 = %f posicion22 = %f)",
         posicion11, posicion12, posicion21, posicion22);

}

//PROGRAMA MATRICES3


void matrices3()
{
   
    int a11, a12, a13, a21, a22, a23, a31, a32, a33;    


    int posicion11, posicion12, posicion13, posicion21, posicion22, posicion23, posicion31, posicion32, posicion33; 
   

    
    printf("MATRIZ DE 3X3 TRANSPUESTA ");
    
    printf("\n\nTeclea la matriz a transponer dando la fila 1, luego la fila 2 y por ultimo la fila 3 (valores de corrido dejando un espacio entre cada uno): ");
    scanf("%d %d %d %d %d %d %d %d %d", &a11, &a12, &a13, &a21, &a22, &a23, &a31, &a32, &a33);
    

    posicion11= a11;
    posicion12= a21;
    posicion13= a31;
    posicion21= a12;
    posicion22= a22;
    posicion23= a32;
    posicion31= a13;
    posicion32= a23;
    posicion33= a33;
    
//RESULTADOS
    
    printf("\n\nLa matriz transpuesta resultante es:\n\n");
    printf("(posicion11 = %d posicion12 = %d posicion13 = %d)\n(posicion21 = %d posicion22 = %d posicion23 = %d)\n(posicion31 = %d posicion32 = %d posicion33 = %d)",
         posicion11, posicion12, posicion13, posicion21, posicion22, posicion23, posicion31, posicion32, posicion33);

}


//PROGRAMA FACTORIAL


int factorial(int n)
{
int f;
if (n==0)
{f=1;}
else
{f=n*factorial(n-1);}
return f;
}

void factorial2()
{
int fact;
int n;
printf("\n Escribe un numero: ");

scanf("%d", &n);
fact=factorial(n);
printf("\n El factorial del numero es: %d \n", fact);

}

//PROGRAMA CONVERSION


//Calcular Celcius a Farenheit
void farenheit()
{
        int celcius;
        float f1, c1;
        printf("Escribe la temperatura en Celsius: ");
        scanf("%f",&c1);
        f1 = sqrt(c1*1.8+32);
        printf("La temperatura en Farenheit es: %.2f\n",f1);
}

//Calcular Farenheit a Celsius
void celsius()
{
        float f2, c2;
        printf("Escribe la temperatura en Farenheit: ");
        scanf("%f",&f2);
        c2 = (f2-32)/1.8;
        printf("La temperatura en Celsius es: %.2f\n", c2);
}

//Calcular Celsius a Kelvin
void kelvin()
{
        float c3, k1;
        printf("Escribe la temperatura en Celsius: ");
        scanf("%f",&c3);
        k1 = c3+273.15;
        printf("La temperatura en Kelvin es: %.2f\n", k1);
}


void conversion()
{
        int opcb;
        printf("1) Conversion Celsius a Farenheit\n");
        printf("2) Conversion Farenheit a Celsius\n");
        printf("3) Conversion Celsius a Kelvin\n");
        printf("Elige una opcion: ");
        scanf("%i",&opcb);

        switch(opcb)
        {
                case 1: farenheit();
                          break;
                case 2: celsius();
                          break;
                case 3: kelvin();
                          break;
		default: printf("Error, por favor intente de nuevo\n");
                         break;
        }
      
}

//PROGRAMA SALARIOS

void salario (){
        int hora, sueldo;
        float s;
        float s1, s2, s3, s4;
        printf("Escribe cuantas horas trabajas al dia: ");
        scanf("%d",&hora);
        printf("Escribe cuanto ganas por hora: ");
        scanf("%d",&sueldo);
        s = (hora*sueldo)*.16+s-(s*.12);
        s1 = (hora*sueldo);
        s2 = s1+(s1*.16);
        s3 = s2-(s2*.12);
        if (s3<10000) {
                s4= s3+(s3*.05);
                printf("Felicidades, tu salario con bono es: %.2f\n",s4); }
        else  printf("Tu salario es: %.2f\n",s3); 
}

int main(){

  int opc ;
  printf("MENU\n");
  printf("\nTeclea la opcion deseada escribiendo el numero que le corresponde:\n");
  
  printf("\n 1 para calculos con triangulos\n 2 para calcular el area de un cuadrado, rectangulo o trapecio\n 3 para conversiones de temperatura\n 4 para suma de matrices \n 5 para multiplicacion de matrices \n 6 para calculo de una matriz transpuesta \n 7 para calculo del factorial de un numero\n 8 para calculos de salario neto\n");
  scanf("%d",&opc);

/* La opcion elegida se le asigna a opc y 
con ella se ejecuta la funcion segun la peticion del usuario*/

  switch(opc){
    
     case 1: triangulo();
     break;
  
     case 2: cuadrados();
     break;
     
     case 3: conversion();
     break;
     
     case 4: matrices1();
     break;
     
     case 5: matrices2();
     break;
     
     case 6: matrices3();
     break;
     
     case 7: factorial2();
     break;
     
     case 8: salario();
     break;
     
     default: printf("No has seleccionado una opcion valida");
     break;
  }
  
return 0;  
}
