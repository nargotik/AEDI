/*!
 * @header      main.c
 * @abstract    Capitulo 3.
 * @discussion  ex 1 - Ler as notas dos 10 alunos de uma turma e 
 *                      calcula a média da turma
 *              ex 2 - Ler as notas dos 10 alunos de uma turma e 
 *                      indica qual a maior nota da turma
 *              ex 3 - Ler as notas dos 20 alunos de uma turma e 
 *                      indica qual a menor nota da turma
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
 * @result      Média das notas inseridas
 */
int main()
{
    // Variavel de armazenamento do contador inicializada a 1
    int contador = 1;
    
    // Numero de notas a contar
    int notas = 10;
    
    // Outras variaveis necessarias
    float soma = 0,nota,media;
    
    // Armazena Nota maxima e minima
    float nota_max = 0, nota_min = 0;
    
    // Ciclo do while
    do {
        printf("Insira nota %d: ", contador);
        scanf("%f",&nota);
        
        // Caso a nota nao esteja dentro dos valores pretendidos 
        // continua o ciclo sem acabar a execucao do mesmo
        if ( !((nota>=0) && (nota<=20)) ) {
            printf("\n- Nota Invalida - Volte a tentar!!\n");
            continue;
        }
            
        soma = nota + soma;
        
        if (contador==1) {
            nota_max = nota;
            nota_min = nota;
        } else {
            if (nota > nota_max) {
                nota_max = nota;
            }
            if (nota < nota_min) {
                nota_min = nota;
            }
        }
        
        
        
        // Incrementa o contador
        contador++; 
    } while (contador <= notas); // Conta até o valor de contagens ser o mesmo que notas
    
    // Calcula a media
    media = soma / (float)notas;
    
    // Escreve a media
    printf("\nMédia: %f",media);
    
    // Escreve a nota maxima
    printf("\nNota Maxima: %.2f",nota_max);
    // Escreve a nota minima
    printf("\nNota minima: %.2f",nota_min);
}

