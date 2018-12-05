#include<stdio.h>

int main()
{
	int i, j, matA[3][3], matB[3][3], matC[3][3];
	
	printf("\nMAtriz A\n");
	
	//populando matrizA
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("\nInsira o termo %d, %d:", i+1, j+1);
		scanf("%d", &matA[i][j]);	
		}
	}
	
	//imprimir a matrizA
		for(i=0;i<3;i++)
	{
		printf("|");
		for(j=0;j<3;j++)
		{
		printf("%d ",matA[i][j]);
		}
		printf("| \n");
	}
	
	//populando matrizB
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("\nInsira o termo %d, %d:", i+1, j+1);
		scanf("%d", &matB[i][j]);
		}
	}
	
	//imprimir a matrizB
		for(i=0;i<3;i++)
	{
		printf("|");
		for(j=0;j<3;j++)
		{
		printf("%d ",matB[i][j]);
		}
		printf("| \n");
	}
	
	//MatrizC
	for(i=0;i<3;i++)
	{
		printf("|");
		for(j=0;j<3;j++)
		{
			matC[i][j]=matA[i][j]+matB[i][j];
			printf("%d", matC[i][j]);
		}
		printf("| \n");
	}
	
	
	system("pause");
	return 0;
}
