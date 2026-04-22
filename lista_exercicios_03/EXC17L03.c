// 17. Crie um programa que leia a média final de um aluno. As regras são:
// Se a média for maior ou igual a 7.0, o aluno está "Aprovado".
// Se a média for entre 4.0 e 6.9, o aluno está em "Recuperação".
// Se a média for menor que 4.0, o aluno está "Reprovado".

#include <stdio.h>
#include <stdlib.h>

int main() {
    float media;

    printf("Ola estudante! Digite a sua media final, por favor: ");
    scanf(" %f", &media);

    if (media >= 7.0)
        printf("Voce foi Aprovado! Parabens.\n");
    else if (media >= 4.0 && media < 7)
        printf("Voce ficou de Recuperacao.\n");
    else
        printf("Voce esta Reprovado.\n");
    
    return 0;
}