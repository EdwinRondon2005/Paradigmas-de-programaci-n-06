#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <locale.h>

//Autor: Edwin Rondón, C.I.: V-31.157.974, Trayecto II, Sección 01.
//Ejercicio N° 2 de Paradigmas de programación.

int main()
{
	setlocale(LC_ALL, "");
	char Texto1 [50];
	char Texto2 [50] = ", . ; : ? ! [] - / ( )";
	char *far;
	
	printf("Introduzca una cadena de caracteres:\n\n");
	gets(Texto1);
	
	printf("\n\n");
	
	far = strtok(Texto1, Texto2);
	
	printf("La cadena con los signos de puntuación borrados es: ");
	
	while(far)
	{
		printf("%s ", far);
		far = strtok('\0', Texto2);
	}
	
	printf("\n");
	
	getch();
	
	return(0);
}
