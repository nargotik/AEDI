/*!
 * @header      main.c
 * @abstract    Programa que mostra anos que falta para tirar carta.
 * @discussion  Condições simples de verificação da inserção de dados.
 * @author      Daniel Torres <a17442|at|alunos.ipca.pt>
 * @link        Daniel Torres GIT <https://github.com/nargotik>
 * @version     1.0 15 de Outubro de 2018
 */


#include <stdio.h>
#include <stdlib.h>

/**
 * Função principal
 * 
 * @param argc
 * @param argv
 * @return void
 */
int main(int argc, char** argv)
{
    int idade;
    printf("Insida a idade:");
    scanf("%d", &idade);
    // Verifica se a idade está entre 0 e 129 
    if (!(idade>=0 && idade<130) ) {
        printf("Dados inseridos incorrectos");
    } else {
        // Short if 
        printf( (idade>=18) ? "Pode tirar a carta" : "Falta(m) %d ano(s) para tirar a carta", 18 - idade );
    }    
    return (EXIT_SUCCESS);
}


