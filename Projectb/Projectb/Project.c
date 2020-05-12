#include "Project.h"

char** beolvasPalya(const char* fajlNev)
{
	
		int phossz, pszel;
		FILE* fin = fopen(fajlNev, "rt");
		if (!fin)
		{
			printf("Sikertelen fájlmegnyitás");
			exit(1);
		}
		fscanf(fin, "%i%i\n", &phossz, &pszel);
		char** palya = (char**)(calloc(phossz, sizeof(char*)));
		//ellenorzes
		for (int i = 0; i < phossz; ++i)
		{
			palya[i] = (char*)(calloc(pszel, sizeof(char)));
		}
		for (int i = 0; i < phossz; ++i)
		{
			for (int j = 0; j < pszel; ++j)
			{
				fscanf(fin, "%c\n", &palya[i][j]);
			}
		}
		return palya;

}

void kirajzolPalya(char** palya)
{
	int phossz, pszel;
	FILE* fin = fopen("Bemenet.txt", "rt");
	if (!fin)
	{
		printf("Sikertelen fájlmegnyitás");
		exit(1);
	}
	fscanf(fin, "%i%i\n", &phossz, &pszel);
	for (int i = 0; i < phossz; ++i)
	{
		for (int j = 0; j < pszel; ++j)
		{
 			if (palya[i][j] == '4' )//&& (i == 0 || i == phossz - 1)) 
			{
				printf("-");
			}
			else if (palya[i][j] == '5')
			{
				printf("|");
			}
			if (palya[i][j] == '0')
			{
				printf(" ");
			}
			if (palya[i][j] == '7')
			{
				printf("*");
			}
			if (palya[i][j] == '6') 
			{
				printf("/");
			}
			if (palya[i][j] == '8')
			{
				printf("/");
			}
			if (palya[i][j] == '9')
			{
				printf("P");
			}
		}
		printf("\n");
	}
	system("pause");
}


