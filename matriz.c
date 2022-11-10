#include <stdio.h>

void sumaMatriz(t,a[10][10],b[10][10],c[10][10])
{
	for (int i=0,i<t,i++)
	{
		for (int j=0,j<t,j++)
		{
			c[i][j]=a[i][j]+b[i][j]
			printf("La suma de las matrices es: %d", &c[i][j];)
		}
	}
}

void tecleeMatriz (t,a[10][10],b[10][10])
{
	for (int i=0,i<t,i++)
        {
                for (int j=0,j<t,j++)
                {
		printf("Teclee valor %i,%j de la matriz a: ", i, j);
		scanf("%i", &a[i][j]);
		}
	}

	for (int i=0,i<t,i++)
        {
                for (int j=0,j<t,j++)
                {
                printf("Teclee valor %i,%j de la matriz b: ", i, j);
                scanf("%i", &b[i][j]);
                }
        }


}



int main ()
{
	int t, a[10][10],b[10][10];
	printf("Programa para sumar dos matrices\n");
	printf("Teclea el tamaño de la matriz; ");
	scanf("%i", &t)
	tecleeMatriz (t,a[10][10],b[10][10]);
	sumaMatriz (t,a[10][10],b[10][10],c[10][10]);
}
