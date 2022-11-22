/*
Programa para el cálculo de conversiones de unidades de temperatura.
Elaboró Uriel Solalíndez Aguilar
*/

#include <stdio.h>
#include <math.h>

void celToKelvin (){
	float c, k;
	printf("Ha elegido la conversion de Celsius a Kelvin\n Inserte los grados Celsius y luego pulse ENTER: \n");
	scanf("%f", &c);
	k=c+273.25;
	printf("Insertó: %f ºC\n su equivaente en ºK es: %f ºK\n", c, k);
}

void celToFahrenheit (){
	float c , f;
	printf("Ha elegido la conversion de Celsius a Fahrenheit\n Inserte los grados Celsius y luego pulse ENTER: \n");
	scanf("%f", &c);
	f=(c*9/5)+32;
	printf("Insertó: %f ºC\n su equivaente en ºF es: %f ºF\n", c, f);
}

void kelToCelsius (){
        float c, k;
        printf("Ha elegido la conversion de Kelvin a Celsius\n Inserte los grados Kelvin y luego pulse ENTER: \n");
        scanf("%f", &k);
        c=k-273.25;
        printf("Insertó: %f ºK\n su equivaente en ºC es: %f ºC\n", k, c);
}

//U.S.

void kelToFahrenheit (){
	float k, f;
	printf("Ha elegido la conversion de Kelvin a Fahrenheit\n Inserte los grados Kelvin y luego pulse ENTER: \n");
	scanf("%f", &k);
	f=(k-273.15)*9/5+32;
	printf("Insertó: %f ºK\n su equivaente en ºF es: %f ºC\n", k, f);
}

void farToCelsius (){
	float f, c;
	printf("Ha elegido la conversion de Fahrenheit a Celsius\n Inserte grados Fahrenheit y luego pulse ENTER \n");
	scanf("%f", &f);
	c=(f-32)*5/9;
	printf("Insertó: %f ºF\n su equivaente en ºC es: %f ºC\n", f, c);
}

void farToKelvin (){
	float f, k;
	printf("Ha elegido la conversion de Fahrenheit a Kelvin\n Inserte grados Fahrenheit y luego pulse ENTER \n");
	scanf("%f", &f);
	k=(f-32)*5/9+273.15;
	printf("Insertó: %f ºF\n su equivaente en ºK es: %f ºC\n", f, k);
}

int main()
{
        char opc;
        printf("Elija la opción que ncesite:\n a) Celsius a Kelvin \n b) Celsius a Fahrenheit \n c) Kelvin a Celsius \n d) Kelvin a Fahrenheit \n e) Fahrenheit a Celsius \n f) Fahrenheit a Kelvin \n Elija una opción: \n");
        scanf("%c", &opc);

        switch(opc)
        {
                case 'a':celToKelvin();
                         break;
                case 'b':celToFahrenheit();
                         break;
                case 'c':kelToCelsius();
                         break;
		case 'd':kelToFahrenheit();
			 break;
		case 'e':farToCelsius();
			 break;
		case 'f':farToKelvin();
			 break;
                default: printf("No existe la opción escrita\n");
        }
}

