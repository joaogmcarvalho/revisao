#include<stdio.h>

int main()
{
	int i, tam, cont=0;
	char palavra[1000], letra;
	
	printf("Exercicio 2");
	
	//pegando a palavra
	printf("\nInsira a palavra: ");
	gets(palavra);
	
	//inserindo a letra a ser contada
	printf("\nEntre com a letra a ser analisada: ");
	scanf("%c", &letra);
	
	tam=strlen(palavra);
	
	for(i=0;i<tam;i++)
	{
		if(palavra[i]==letra)
		{
			cont++;
		}
	}
	
	//imprimindo o resultado
	
	printf("\nNa palavra %s foi achada %c %d vezes", palavra, letra, cont);	
		
	system("pause");
	return 0;
}
