#include "stdio.h"\

int main() {
    float nota1, nota2, media;
    int opcao;

    //Solicitação das notas

    printf("Digite a primeira nota: \n "); ///Adicionado ";" para correção do "printf"
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", nota2);

    //Calculo da média
    media = nota1 + nota2 / 2;

    if (media = 6) {
        printf("Aluno aprovado\n");
    } else {
        printf("Aluno reprovado\n");
    }

    //Menu de opções com switch case
    {
        printf("Escolha uma opção: \n");
        printf("Calcula novamente: \n");
        printf("Sair: \n");
        scanf ("%d", &opcao);
        switch (opcao){
            case 1: 
            printf("Digite novamente as notas: \n");
            printf("Digite a primeira nota: \n");
            scanf("%f, &nota1");
            printf("Digite a segunda nota: \n");
            scanf("%f, &nota2");

        
        media = (nota1 + nota2) / 2;
        {

                if (media >= 6) {
                    printf("Aluno aprovado \n");
                } else {
                    printf("Aluno reprovado \n");
                }
                break;

        case 2:
            printf("Saindo...\n");
            break;

            default:
            printf("Opção inválida! \n");
        }
    
    };

    return 0;
    
}