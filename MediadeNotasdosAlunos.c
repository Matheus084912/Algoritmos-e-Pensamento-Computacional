#include <stdio.h>
#include <string.h>

struct Estudante{
    char nome[50];
    int matricula;
    float nota1;
    float nota2;
    float media;
};

int main(){
 
 struct Estudante estudante;
 char continuar;
 
do{
   printf("\n\n-----Bem vindos ao Sistema de Gerenciamento de Alunos-----\n\n");
    
   printf("Digite o nome do estudante:");
   fgets(estudante.nome, sizeof(estudante.nome), stdin); 
    /* remover newline deixado por fgets, se houver */
    size_t len = strlen(estudante.nome);
    if (len > 0 && estudante.nome[len-1] == '\n') {
            estudante.nome[len-1] = '\0';
    }
   
   
   printf("Digite a matricula do aluno:");
   scanf("%d",&estudante.matricula);
   printf("Digite a primeira nota:");
   scanf("%f", &estudante.nota1);
   printf("Digite a segunda nota:");
   scanf("%f", &estudante.nota2);
  
   estudante.media = (estudante.nota1 + estudante.nota2) / 2.0;
   
   
   printf("\n\nDados do Estudante:\n\n");
   printf("Nome do Estudante:%s",estudante.nome);
   printf("Matricula do Estudante:%d ",estudante.matricula);
   printf("\nNota 1 do Estudante:%.2f ",estudante.nota1);
   printf("\nNota 2 do Estudante:%.2f ",estudante.nota2);
   printf("\nMedia do Estudante:%.2f ",estudante.media);

   
   if(estudante.media>=6){
    printf("\n\nEstudante Aprovado\n\n");
   }
   else{
    printf("\n\nEstudante Reprovado\n\n");
   }
   
    printf("deseja continuar?(s/n)");
    scanf(" %c",&continuar);

    getchar();
  
} while(continuar == 's'|| continuar == 'S'); 
printf("\nSistema de Gerenciamento de Alunos Encerrado.\n Obrigado por usar!");

    return 0;
}
