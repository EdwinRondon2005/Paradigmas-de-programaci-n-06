#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <locale.h>

//Autor: Edwin Rondón, C.I.: V-31.157.974, Trayecto II, Sección 01.
//Ejercicio N° 1 de Paradigmas de programación.

//Autor: Edwin Rondón, C.I.: V-31.157.974, Trayecto II, Sección 01.
//Ejercicio N° 1 de Paradigmas de programación.

int main()
{
	setlocale(LC_ALL, "");
	char Texto [50];
	
	printf("Ingresar un número en letras: ");
	scanf("%s", Texto);
	
	if(strcmp (Texto, "cero") == 0)
	{
		printf("\n0\n\n");
	}
	else
	{
		if(strcmp (Texto, "uno") == 0)
		{
			printf("\n1\n\n");
		}
		else
		{
			if(strcmp (Texto, "dos") == 0)
			{
				printf("\n2\n\n");
			}
			else
			{
				if(strcmp (Texto, "tres") == 0)
				{
					printf("\n3\n\n");
				}
				else
				{
					if(strcmp (Texto, "cuatro") == 0)
					{
						printf("\n4\n\n");
					}
					else
					{
						if(strcmp (Texto, "cinco") == 0)
						{
							printf("\n5\n\n");
						}
						else
						{
							if(strcmp (Texto, "seis") == 0)
							{
								printf("\n6\n\n");
							}
							else
							{
								if(strcmp (Texto, "siete") == 0)
								{
									printf("\n7\n\n");
								}
								else
								{
									if(strcmp (Texto, "ocho") == 0)
									{
										printf("\n8\n\n");
									}
									else
									{
										if(strcmp (Texto, "nueve") == 0)
										{
											printf("\n9\n\n");
										}
										else
										{
											if(strcmp (Texto, " ") != 0)
											{
												printf("\nPalabra inválida.\n\n");
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	
	getch();
	
	return(0);
}
