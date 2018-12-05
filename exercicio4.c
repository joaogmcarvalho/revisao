#include<stdio.h>

int main()
{
	int alunos,cont=0, i;
	float notas[20], media=0;
	
	printf("Lista de Alunos ");
	
	
	//guardar as notas
	for(i=0;i<20;i++)
	{
		printf("\nInsira a nota do aluno %d: ", i+1);
		scanf("%f", &notas[i]);
		
		media=media+notas[i];
	}
	
	//media das notas
	media=media/20;
	printf("\nA media foi: %.2f \n", media);
	
	for(i=0;i<20;i++)
	{
		if (notas[i]>media) cont++; /*cont é o contador*/
	}
	printf("\nNumeros de alunos acima da media: %d \n", cont++); /*imprimindo o numero de alunos acima da media*/
	
	
	system("pause");
	return 0;
}
