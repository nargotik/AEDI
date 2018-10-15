/*!
 * @header      main.c
 * @abstract    Compara 3 Valores
 * @discussion  Compara 3 Valoes e mostra o maior ou diz que sao todos iguais.
 * @author      Daniel Torres <a17442|at|alunos.ipca.pt>
 * @link        Daniel Torres GIT <https://github.com/nargotik>
 * @ref         some reference
 * @version     1.0 15 de Outubro de 2018
 */


#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv)
{
    int v1,v2,v3;

    printf("Valores ?");
    scanf("%d %d %d",&v1,&v2,&v3);
    
    if (v1==v2 && v2==v3) {
        printf("São Iguais");
    }
    else if (v1>=v2 && v1>=v3) {
        printf("V1 é o maior %d",v1);
    } else if (v2 >= v3 && v2 >= v1) {
        printf("V2 é o maior %d", v2);
    } else {
        printf("V3 é o maior %d", v3);
    }
    return (EXIT_SUCCESS);
}


