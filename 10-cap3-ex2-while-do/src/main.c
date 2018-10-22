/*!
 * @header      main.c
 * @abstract    Capitulo 3.
 * @discussion  ex 1 - Ler as notas dos 10 alunos de uma turma e 
 *              calcula a media da turma
 *              ex 2 - Ler as notas dos 10 alunos de uma turma e 
 *              indica qual a maior nota da turma
 *              
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
    
    // Armazena Nota maxima
    float nota_max = 0;
    
    // Ciclo while 
    // Conta ate o valor de contagens ser o mesmo que notas
    while (contador <= notas) {
        printf("Insira nota %d: ", contador);
        scanf("%f",&nota);
        soma = nota + soma;
        
        // Verifica se nota 'e superior a nota maxima
        if (nota > nota_max) {
            nota_max = nota;
        }
        
        // Incrementa o contador
        contador++; 
    }  
    
    // Calcula a media
    media = soma / (float)notas;
    
    // Escreve a media
    printf("\nMedia: %f",media);
    
    // Escreve a nota maxima
    printf("\nNota Maxima: %.2f",nota_max);
}


