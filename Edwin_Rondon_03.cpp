#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <locale.h>

//Autor: Edwin Rondón, C.I.: V-31.157.974, Trayecto II, Sección 01.
//Ejercicio N° 3 de Paradigmas de programación.

int main()
{
	setlocale(LC_ALL, "");
	char cadA [1000];
	char cadB [1000];
	char Fin [2000];
	char *kotoba;
	int i, j, RTX;
	
	printf("Ingresar primer cadena: ");
	gets(cadA);
	printf("Ingresar segunda cadena: ");
	gets(cadB);
	
	cadA[strcspn(cadA, "\n")] = '\0';
	cadB[strcspn(cadB, "\n")] = '\0';
	
	strcpy(Fin, cadA);
	
	kotoba = strtok(cadB, ",");
	
	while(kotoba != NULL)
	{
		RTX = 0;
		
		for(i = 0; Fin [i] != '\0'; i++)
		{
			if(Fin [i] == ',')
			{
				j = i + 1;
				
				while(Fin [j] != ',' && Fin [j] != '\0')
				{
					j++;
				}
				if(strncmp(kotoba, &Fin [i + 1], j - i - 1) == 0)
				{
					RTX = 1;
				}
			}
		}
		
		if(!RTX)
		{
			strcat(Fin, ",");
			strcat(Fin, kotoba);
		}
		
		kotoba = strtok(NULL, ",");
	}
	
	printf("Como quedaría al final: %s\n", Fin);
	
	getch();
	
	return(0);
}
