#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("Champions\n");
	printf("Elige una opcion\n");
	printf("1. Octavos\n");
	printf("2. Cuartos\n");
	printf("3. Semifinal\n");
	printf("4. Final\n");
	printf("5. Campeon\n");
	
	int op;
	scanf("%d",&op);
	switch (op)
	
	{
	case 1:
		printf("\n***Octavos de final*** \n");
		printf("\nReal Madrid 1-4  Ajax");
		printf("\nB.Dortmund  0-1  Tottenham");
		printf("\nPSG         1-3  M.United");
		printf("\nOporto      3-1  Roma");
		printf("\nM.City      7-0  Schalke04");
		printf("\nJuventus    1-1  Atletico");
		printf("\nBarcelona   1-0  Lyon");
		printf("\nBayern      1-2  Liverpool");
		break;
	
	case 2:
		printf("\n***Cuartos de final***\n");
		printf("\nBarcelona  3-0  M.United");
		printf("\nJuventus   1-2  Ajax");
		printf("\nM.City     4-3  Tottenham");
		printf("\nOporto     1-4  Liverpool");
		break;
		
	case 3:
		printf("\n******Semifinal******\n");
		printf("\nLiverpool  4-0  Barcelona");
		printf("\nAjax       2-3  Tottenham");
		break;
		
	case 4:
		printf("\n*********Final*********\n");
		printf("\nTottenham  0-2  Liverpool");
		break;
		

	}
	return 0;
}
