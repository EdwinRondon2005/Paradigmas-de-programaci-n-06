#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <locale.h>

//Autor: Edwin Rond�n, C.I.: V-31.157.974, Trayecto II, Secci�n 01.
//Ejercicio N� 4 de Paradigmas de programaci�n.

int main()
{
	setlocale(LC_ALL, "");
	char Correo [100];
	int lon_g, i;
	int numcar = 0;
	int numnum = 0;
	int arr = 0;
	
	printf("Ingresar correo electr�nico: ");
	scanf("%s", Correo);
	
	lon_g = strlen(Correo);
	
	if((lon_g > 8) && (strstr(Correo, "gmail")))
	{
		printf("Correo inv�lido.");
	}
	
	if((lon_g > 8) && (strstr(Correo, "hotmail")))
	{
		printf("Correo inv�lido.");
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
					printf("Correo inv�lido.");
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
		printf("Correo inv�lido (tiene que ser Gmail o Hotmail.");
		getch();
	}
	
	if(strstr(Correo, ".com"))
	{
		arr++;
	}
	
	if(!arr)
	{
		printf("Correo inv�lido");
		getch();
	}
	
	if(arr == 3)
	{
		printf("Correo v�lido.");
	}
	else
	{
		printf("Correo inv�lido.");
	}
	
	getch();
	
	return(0);
}
