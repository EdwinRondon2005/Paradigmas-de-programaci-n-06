#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <locale.h>

//Autor: Edwin Rondón, C.I.: V-31.157.974, Trayecto II, Sección 01.
//Ejercicio N° 4 de Paradigmas de programación.

int main()
{
	setlocale(LC_ALL, "");
	char Correo [100];
	int lon_g, i;
	int numcar = 0;
	int numnum = 0;
	int arr = 0;
	
	printf("Ingresar correo electrónico: ");
	scanf("%s", Correo);
	
	lon_g = strlen(Correo);
	
	if((lon_g > 8) && (strstr(Correo, "gmail")))
	{
		printf("Correo inválido.");
	}
	
	if((lon_g > 8) && (strstr(Correo, "hotmail")))
	{
		printf("Correo inválido.");
	}
	
	for(i = 0; i < lon_g; i++)
	{
		if((Correo [i] >= 'a' && Correo [i] <= 'z') || (Correo [i] >= 'A' && Correo [i] <= 'Z'))
		{
			numcar++;
		}
		else
		{
			if(Correo [i] >= '0' && Correo [i] <= '9')
			{
				numnum++;
			}
			else
			{
				if(Correo [i] = '@')
				{
					
				}
				else
				{
					printf("Correo inválido.");
				}
			}
		}
	}
	
	for(i = 0; i < lon_g; i++)
	{
		if(Correo [i] == '@')
		{
			arr++;
		}
	}
	
	if(!arr)
	{
		printf("Correo invalido.");
		getch();
	}
	
	if(strstr(Correo, "gmail") || strstr(Correo, "hotmail"))
	{
		arr++;
	}
	
	if(!arr)
	{
		printf("Correo inválido (tiene que ser Gmail o Hotmail.");
		getch();
	}
	
	if(strstr(Correo, ".com"))
	{
		arr++;
	}
	
	if(!arr)
	{
		printf("Correo inválido");
		getch();
	}
	
	if(arr == 3)
	{
		printf("Correo válido.");
	}
	else
	{
		printf("Correo inválido.");
	}
	
	getch();
	
	return(0);
}
