/*!
 * @header      main.c
 * @abstract    Programa para calcular bonus de salário mediante anos de trabalho e filhos.
 * @discussion  5 eur a cada ano acima dos 45
 *              10 eur ano ate 10 anos 
 *              20 por cada ano a mais
 *              
 *              25 eur por filhpo no maximo ate 3 filhos acima de 3 filhos recebera 75eur
 * 
 * @author      Daniel Torres <a17442|at|alunos.ipca.pt>
 * @link        Daniel Torres GIT <https://github.com/nargotik>
 * @ref         some reference
 * @version     1.0 15 de Outubro de 2018
 */


#include <stdio.h>
#include <stdlib.h>


/**
 * Calcula bonus mediante numero de filhos
 * 
 * @param filhos numero de filhos
 * @return Bonus a atribuir
 */
int calcula_bonus_filhos(int filhos) {
    
    // Se o valor estiver inscorrecto
    if (!(filhos>0)) {
        printf("-Numero de filhos inválido! \n");
        return 0;
    }
    // Acima de 3 filhos sempre 75 eur abaixo 25 eur por cada filhos
    return (filhos > 3) ? 75 : filhos * 25;
}

/**
 * Calcula bonus mediante idade do colaborador
 * 
 * @param anos Idade do colaborador
 * @return Bonus a atribuir
 */
int calcula_bonus_idade(int anos) {
    int bonus = 0;
    
    // Se o valor estiver inscorrecto
    if (!(anos>0)) {
        printf("-Idade inválida !! \n");
        return 0;
    }
    
    if (anos <= 10) {
        // Apenas 10 Eur por ano
        bonus = anos * 10;
    } else if (anos <= 45) {
        // Apenas 10 eur para os primeiros 10 anos
        bonus = 10 * 10;
        // Anos acima dos 10 anos = anos - 10 
        bonus += (anos - 10) * 20;
    } else {
        // Apenas 10 eur para os primeiros 10 anos
        bonus = 10 * 10;
        // Dos 10 aos 45 apenas 20 eur por ano = 45 - 10
        bonus += 35 * 20;
        // Anos acima dos 10 anos = anos - 10 
        bonus += (anos - 45) * 5;
    
    }
}

/*!
 * @function    main
 * @abstract    main program function.
 * @param       argc    ....
 * @param       argv     ....
 * @result      An integer result of this function.
 */
int main(int argc, char** argv)
{
    int idade;
    // armazena numero de filhos
    int filhos = 0;
    // Armazena o bonus dos filhos
    int bonus_filhos = 0;
    // Armazena o bonus da idade
    int bonus_idade = 0;
    
    
    printf("Insira idade do colaborador: ");
    scanf("%d",&idade);
    bonus_idade = calcula_bonus_idade(idade);
    
    
    printf("Insira filhos do colaborador :");
    scanf("%d",&filhos);
    bonus_filhos = calcula_bonus_filhos(filhos);
    
    printf("Bonus por filhos: %d eur \n"
           "Bonus por idade: %d eur \n"
           "Bonus Total: %d EUR",
            bonus_filhos,
            bonus_idade,
            bonus_filhos + bonus_idade);
 
    return (EXIT_SUCCESS);
}

