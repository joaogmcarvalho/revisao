#include<stdio.h>
int main()
{
	int tam, i;
	char palavra[1000];
	
	printf("Exercicio 1");
	
	printf("\nInsira a sua palavra: ");
	gets(palavra);
	
	printf("\nA palavra digitada foi: %s \n\n", palavra);
	
	tam=strlen(palavra);
	printf("\nO numero de letras eh igual: %d \n", tam);
	
	for(i=tam-1;i>=0;i--)
	{
		printf("%c", palavra[i]);
	}
	
	system("pause");
	return 0;
}
