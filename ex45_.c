#include <stdio.h>
#include <math.h>

int main()
{

        char outroUsuario = 'S';
        char letraQuestao;

        int totalAlunos = 0;

        float notaAluno = 0;
        float notaTotalAlunos = 0;

        float maiorNota = -1 * INFINITY;
        float menorNota = INFINITY;

        do
        {   
            totalAlunos++; 

            for (int questao = 1; questao <= 10; questao++)
            {
                printf("Digite a letra marcada para questao %d: \n", questao);    
                scanf("%c", &letraQuestao);
                fflush(stdin);

                if(questao == 1 && letraQuestao =='A'){
                    notaAluno++;
                } else if(questao == 2 && letraQuestao =='B'){
                    notaAluno++;
                } else if(questao == 3 && letraQuestao =='C'){  
                    notaAluno++;
                } else if(questao == 4 && letraQuestao =='D'){
                    notaAluno++;
                } else if(questao == 5 && letraQuestao =='E'){    
                    notaAluno++;
                } else if(questao == 6 && letraQuestao =='E'){  
                    notaAluno++;
                } else if(questao == 7 && letraQuestao =='D'){
                    notaAluno++;
                } else if(questao == 8 && letraQuestao =='C'){
                    notaAluno++;
                } else if(questao == 9 && letraQuestao =='B'){
                    notaAluno++;
                } else if(questao == 10 && letraQuestao =='A'){
                    notaAluno++;
                } 
            }


            if( notaAluno > maiorNota ){
                maiorNota = notaAluno;
            } else if( notaAluno < menorNota ){
                menorNota = notaAluno;
            }

            notaTotalAlunos += notaAluno;  
            printf("Outro aluno usara o sistema? Digite S ou N\n");    
            scanf("%c", &outroUsuario);   
            fflush(stdin);        
            notaAluno = 0;
        }
        while (outroUsuario == 'S');
        
        float mediaNotas = notaTotalAlunos / totalAlunos;

        printf("Media da turma: %.2f\n Maior Acerto: %.0f\n Menor Acerto: %.0f\n", mediaNotas, maiorNota, menorNota);   


    return 0;
}

/** switch(questao){
                    case 1: 
                    {
                        if(letraQuestao == 'A')
                            notaAluno; 
                        break;
                    }
                }*/