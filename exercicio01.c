#include <stdio.h>

float cadastroPeso(){
    float peso;
    printf("Digite o peso: ");
    scanf("%f", &peso);
    return peso;
}

float testeMulta(float peso, float limite, float excesso) {
    float valorMulta;
    float valorKilo = 4; 
    if (peso > limite){
        valorMulta = excesso * valorKilo;
    } else {
        valorMulta = 0;
    }

    return valorMulta;
}

float calculaExcesso(float peso, float limite){
    if(peso > limite){
        return peso - limite;
    }
    return 0;
}


int main(){
    
    float peso = cadastroPeso();
    float limite = 50;

    float excesso = calculaExcesso(peso, limite);
    float multa = testeMulta(peso, limite, excesso);

    printf("Peso excedente: %.2f\n", excesso);
    printf("O valor da multa: %.2f\n", multa);

    return 0;
}