// 16. Criar um algoritmo chamado Zodíaco que solicite o dia e o mês de nascimento e apresente o signo.
// Ao final, perguntar se deseja continuar (S/N).

#include <stdio.h>
#include <stdlib.h>

int main() {
    int diaNasc;
    int mesNasc;
    char continuar;

    do {
        printf("Descubra o seu Signo do Zodiaco!\n");
        printf("Dia de Nascimento: ");
        scanf("%d", &diaNasc);

        printf("Mes de Nascimento: ");
        scanf("%d", &mesNasc);

        if ((mesNasc == 3 && diaNasc >= 21) || (mesNasc == 4 && diaNasc <= 19)) {
            printf("Signo: Aries\n");
        } else if ((mesNasc == 4 && diaNasc >= 20) || (mesNasc == 5 && diaNasc <= 20)) {
            printf("Signo: Touro\n");
        } else if ((mesNasc == 5 && diaNasc >= 21) || (mesNasc == 6 && diaNasc <= 20)) {
            printf("Signo: Gemeos\n");
        } else if ((mesNasc == 6 && diaNasc >= 21) || (mesNasc == 7 && diaNasc <= 22)) {
            printf("Signo: Cancer\n");
        } else if ((mesNasc == 7 && diaNasc >= 23) || (mesNasc == 8 && diaNasc <= 22)) {
            printf("Signo: Leao\n");
        } else if ((mesNasc == 8 && diaNasc >= 23) || (mesNasc == 9 && diaNasc <= 22)) {
            printf("Signo: Virgem\n");
        } else if ((mesNasc == 9 && diaNasc >= 23) || (mesNasc == 10 && diaNasc <= 22)) {
            printf("Signo: Libra\n");
        } else if ((mesNasc == 10 && diaNasc >= 23) || (mesNasc == 11 && diaNasc <= 21)) {
            printf("Signo: Escorpiao\n");
        } else if ((mesNasc == 11 && diaNasc >= 22) || (mesNasc == 12 && diaNasc <= 21)) {
            printf("Signo: Sagitario\n");
        } else if ((mesNasc == 12 && diaNasc >= 22) || (mesNasc == 1 && diaNasc <= 19)) {
            printf("Signo: Capricornio\n");
        } else if ((mesNasc == 1 && diaNasc >= 20) || (mesNasc == 2 && diaNasc <= 18)) {
            printf("Signo: Aquario\n");
        } else if ((mesNasc == 2 && diaNasc >= 19) || (mesNasc == 3 && diaNasc <= 20)) {
            printf("Signo: Peixes\n");
        } else {
            printf("Data invalida!\n");
        }

        printf("Deseja continuar (S/N)? ");
        scanf(" %c", &continuar);

    } while (continuar == 'S' || continuar == 's');

    return 0;
}