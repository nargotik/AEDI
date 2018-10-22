/*!
 * @header      main.c
 * @abstract    Ler as notas dos 10 alunos de uma turma e calcula a média da turma.
 * @discussion  Ler as notas dos 10 alunos de uma turma e 
 *              calcula a média da turma
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
 * @result      Media das notas inseridas
 */
int main(int argc, char** argv)
{
    // Variavel de armazenamento do contador inicializada a 1
    int contador = 1;
    
    // Numero de notas a contar
    int notas = 10;
    
    // Outras variaveis necessarias
    float soma = 0,nota,media;
    
    // Ciclo while do
    while (contador <= notas) // Conta até o valor de contagens ser o mesmo que notas
    {
        printf("Insira nota %d: ", contador);
        scanf("%f",&nota);
        soma = nota + soma;
        
        // Incrementa o contador
        contador++; 
    } 
    
    // Calcula a media
    media = soma / (float)notas;
    
    // Escreve a media
    printf("\nMédia: %f",media);
}


