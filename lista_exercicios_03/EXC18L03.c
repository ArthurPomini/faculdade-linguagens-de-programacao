// 18. Crie um programa que leia o peso (em kg) e a altura (em metros) de uma pessoa. Calcule o IMC e
// exiba a classificação correspondente:
// Abaixo de 18.5: Abaixo do peso
// Entre 18.5 e 24.9: Peso normal
// Entre 25.0 e 29.9: Sobrepeso
// 30.0 ou mais: Obesidade

#include <stdio.h>
#include <stdlib.h>

int main() {
    int peso;
    float altura;

    printf("---Calculadora de IMC---\n\n");

    printf("Digite o seu peso (em kg): ");
    scanf(" %d", &peso);
    printf("Digite a sua altura (em metros): ");
    scanf(" %f", &altura);

    float imc;
    imc = peso / (altura * altura);

    if (imc >= 30.0)
        printf("Risco de obesidade.\n");
    else if (imc >= 25.0 && imc < 30)
        printf("Risco de sobrepeso.\n");
    else if (imc >= 18.5 && imc < 25)
        printf("Peso normal.\n");
    else
        printf("Abaixo do peso.\n");
    
    return 0;
}