//Programa: triangulo.c
//Teorema de Pitágoras
//Para todo triángulo rectángulo (Definiendo a un triángulo rectángulo como aquel que posee un ángulo de 90º):
//la suma de los catetos elevados al cuadrado de un tránguo es igual a la hipotenusa igualmente igualada al cuadrado.

//Cálculo de su hipotenusa:

#include <stdio.h>
#include <math.h>

void hipotenusa()
{
	int co, ca;
	float h;
	printf("Escribe la longitud del cateto adyacene: ");
	scanf("%d", &ca);
	printf("Escribe la longitud de del cateto opuesto: ");
	scanf("%d", &co);
	h = sqrt((co*co)+(ca*ca));
	printf("La hipotenusa mide: %f", h);
}

void area()
{
	float b, h;
	float a;
	printf("Escribe la base: ");
	scanf("%f",&b);
	printf("Escribe la altura: ");
	scanf("%f", &h);
	a = (b*h)/2;
	printf("El área es: %f", a);
}

void angulo()
{
	float a1, a2, a3;
	printf("Escribe el valor del primer ángulo: ");
	scanf("%f", &a1);
	printf("Escribe el valor del segundo ángulo: ");
	scanf("%f", &a2);
	a3 = 180 - (a1 + a2);
	printf("El valor del angulo solicitado es: %f \n", a3);
}

int main()
{
	char opc;
	printf("Elija la opción que neccesite:\n a) hipotenusa \n b) área del triángulo \n c) tercer ángulo de un triángulo \n Elija una opción: \n");
	scanf("%c", &opc);

	switch(opc)
	{
		case 'a':hipotenusa();
		         break;
		case 'b':area();
			 break;
		case 'c':angulo();
			 break;
		default: printf("No existe la opción escrita");
	}
}
