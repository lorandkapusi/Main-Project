#include "Project.h"
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_DEPRECATE
#define WIN32_LEAN_AND_MEAN

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>


int hossz, szel;

int main()
{
	char** palya;
	palya = beolvasPalya("Bemenet.txt");
	kirajzolPalya(palya);
	int elozo;
	int jatekosX = 1;
	palya[jatekosX]= 'P';

	while (1)
	{
		kirajzolPalya(palya);
		printf("jobb: j\nle: l\n");
		char option = getch();
		elozo = jatekosX;

		if (option == 'l')
		{
			jatekosX++;
		}
		if (palya[jatekosX] == '0')
		{
			palya[jatekosX] = 'P';
			palya[elozo] = '0';
		}
		
		system("CLS");
	}

}