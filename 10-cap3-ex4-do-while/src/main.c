/*!
 * @header      main.c
 * @abstract    Capitulo 3.
 * @discussion  ex 4 - Ler as 3 notas de cada um dos 20 alunos de uma turma e 
 *              calcula a média da turma
 *              ex 5 - Para cada um dos 20 alunos de uma turma, 
 *                      ler o número do aluno e as notas dos 3 testes. 
 *                      Indica a maior e a menor média da turma 
 *                      e os números dos respectivos alunos.
 *              @todo
 *              ex 6 - Para cada um dos 20 alunos de uma turma, 
 *                      ler o número do aluno e as notas dos 3 testes. 
 *                      Indica a maior e a menor nota em todos os testes 
 *                      e os números dos respectivos alunos.
 *              extra - implementacao de validacao de notas entre 0 e 20
 * @author      Daniel Torres <a17442|at|alunos.ipca.pt>
 * @link        Daniel Torres GIT <https://github.com/nargotik>
 * @version     1.0 22 de Outubro de 2018
 */


#include <stdio.h>
#include <stdlib.h>

/*!
 * @function    main
 * @abstract    main program function.
 */
int main()
{
    // Variavel de armazenamento do contador inicializada a 1
    int contador = 1;
    
    // Variavel do contador da nota lida
    int contador_aluno = 1;
    
    // Numero de notas a contar
    int alunos = 3;
    // Numero de notas por aluno
    int notas_aluno = 3;
    
    // Variaveis relativas ao aluno
    float nota1,nota2,nota3,media_aluno;
    
    // Variavel para guardar temporariamente a nota
    float nota_temp;
    
    // Outras variaveis necessarias para a turma
    float soma = 0,media;
    
    // Armazena Nota maxima e minima
    float media_max = 0, media_min = 0;
    
    // Armazena aluno com media maior ou menor
    int media_max_aluno, media_min_aluno;
    

    
    // Ciclo do while
    do {
        // Reset ao contador do aluno
        contador_aluno = 1;
        
        
        
        // Ciclo para contar x notas
        do {
            printf("Insira nota %d do aluno %d ", contador_aluno, contador);
            scanf("%f",&nota_temp);
            
            // Caso a nota nao esteja dentro dos valores pretendidos 
            // continua o ciclo sem acabar a execucao do mesmo
            if ( !((nota_temp>=0) && (nota_temp<=20)) ) {
                printf("\n- Nota Invalida - Volte a tentar!!\n");
                continue;
            }
            
            
            
            // De dorma a nao usar arrays implementacao via case
            switch(contador_aluno) {
                case 1:
                    nota1 = nota_temp;
                    break;
                case 2:
                    nota2 = nota_temp;
                    break;
                case 3:
                    nota3 = nota_temp;
                    break;
            }
            
            
            
            contador_aluno++;
        } while (contador_aluno<=notas_aluno);
        
        // media do aluno
        media_aluno = (nota1 + nota2 + nota3) / 3;
        printf("=== Media do aluno: %.2f === \n\n",media_aluno);
        // Somatorio das medias
        soma = media_aluno + soma;
        
        if (contador==1) {
            media_max = media_min
                    = media_aluno; // reset ao minimo e maximo
            media_max_aluno = media_max_aluno
                    = contador; // reset ao numero de aluno
            
        } else {
            if (media_aluno > media_max) {
                media_max = media_aluno;
                media_max_aluno = contador;
            }
            if (media_aluno < media_min) {
                media_min = media_aluno;
                media_min_aluno = contador;
            }
        }
        
        
        
        // Incrementa o contador
        contador++; 
    } while (contador <= alunos); // Conta até o valor de contagens ser o mesmo que notas
    
    // Calcula a media
    media = soma / (float)alunos;
    
    // Escreve a media
    printf("\nMédia das medias: %.2f",media);
    
    // Escreve a nota maxima
    printf("\nMedia Maxima: %.2f pertence ao aluno %d ",media_max,media_max_aluno);
    // Escreve a nota minima
    printf("\nMedia minima: %.2f pertence ao aluno %d",media_min,media_min_aluno);
}

