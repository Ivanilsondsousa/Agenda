#include<stdio.h>
#include<stdlib.h>
#include<strings.h>
#include<locale.h>

struct contatos{
	int codigo;
	char nome [80], telefone[20], email[80]; 
	
};
int main () {
	
	setlocale(LC_ALL, "Portuguese");
		
	int digite, contador = 0, i;
	struct contatos pessoa[5]; 
	
	
	do{
		printf("------Agenda - versão BETA------\n");
		printf("Digite 1 para inserir novo cadastro;\n");
		printf("Digite 2 para mostrar clientes cadastrados;\n");
		printf("Digite 0 para encerrar.\n\n");	
		scanf("%d", &digite);
		fflush(stdin);
		
			
		system("cls");
		
		
		switch(digite){
			case 1:
				
				if(contador<=4){

					
					
					printf("Insira o nome do cliente:\n");
					fgets(pessoa[contador].nome, 80, stdin);
					printf("\n");
					fflush(stdin);
					
					printf("Insira o telefone do cliente:\n");
					fgets(pessoa[contador].telefone, 20, stdin);
					printf("\n");
					fflush(stdin);
					
					printf("Insira o e-mail do cliente:\n");
					fgets(pessoa[contador].email, 80, stdin);
					printf("\n");
					fflush(stdin);
					
				
					contador++;
					
					system("Pause");
					system("cls");
					
			} else{
				printf("Agenda lotada!\n");
				
				system("Pause");
				system("cls");
			}
			
			break;	
			
			case 2:
				if(contador == 0){
					printf("Agenda vazia!\n");
					system("Pause");
					system("cls");
				} else{
					
				
				for(i=0; i<contador; i++){
					printf("***Código: %d\n", i);
					printf("Nome: %s", pessoa[i].nome);
					printf("Telefone: %s", pessoa[i].telefone);
					printf("E-mail: %s", pessoa[i].email);
					printf("-----------\n");				
				 
				}
				
				system("Pause");
				system("cls");
				
			}
			break;	
			
			case 0:
				printf("ENCERRAMENTO DO PROGRAMA\n");
			break;	
			
			default:
				printf("Erro: opção inválida!\n");
				
				system("Pause");
				system("cls");
		}
		
	}while(digite !=0);		

	return(0);
}
