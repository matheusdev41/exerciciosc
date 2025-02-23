#include <stdio.h>

// Função para capturar e validar entrada de horas trabalhadas
float cadastroHoras(){
    float horas;
    do {
        printf("Horas trabalhadas: \n");

        // scanf retorna 1 sempre que a entrada for bem-sucedida, horas não podem ser negativas
        if (scanf("%f", &horas) != 1 || horas < 0){ 
            printf("Entrada invalida, insira um numero valido.\n");
            while (getchar() != '\n');
        } else {
            break;
        }
    } while (1); // Lupi infinito até o usuário digitar uma entrada válida
        return horas;
}

// Função para capturar e validar entrada de valor das horas trabalhadas
float cadastroValorHora(){
    float valorHora;
    do {
        printf("Valor Hora: \n");

        // scanf retorna 1 sempre que a entrada for bem-sucesida, valor das horas não podem ser negativas
        if (scanf("%f", &valorHora) != 1 || valorHora < 0){
            printf("Entrada invalida, insira um numero valido.\n");
            while (getchar() != '\n');
        } else {
            break;
        }
    } while (1); // Lupi infinito ate o usuario digitar uma entrada válida
        return valorHora;
}

float calculoImpostoRenda(float salarioBruto){
    float impostoRenda = salarioBruto * 0.11;
    return impostoRenda;
}

float calculoInss(float salarioBruto){
    float inss = salarioBruto * 0.08;
    return inss;
}

float calculoSindicato(float salarioBruto){
    float sindicato = salarioBruto * 0.05;
    return sindicato;
}

float calculoSalarioLiquido(float salarioBruto, float impostoRenda, float inss, float sindicato){
    float salarioLiquido = salarioBruto - (impostoRenda + inss + sindicato);
    return salarioLiquido;
}

int main()
{
    float horas = cadastroHoras();
    float valorHora = cadastroValorHora();
    float salarioBruto = horas * valorHora;

    float impostoRenda = calculoImpostoRenda(salarioBruto);
    float inss = calculoInss(salarioBruto);
    float sindicato = calculoSindicato(salarioBruto);
    float salarioLiquido = calculoSalarioLiquido(salarioBruto, impostoRenda, inss, sindicato);
    
    printf("\n=========== Holerite ===========\n");
    printf("+ Salario Bruto: R$%.2f\n", salarioBruto);
    printf("- IR(11%%): R$%.2f\n", impostoRenda);
    printf("- INSS(8%%): R$%.2f\n", inss);
    printf("- Sindicato(5%%): R$%.2f\n", sindicato);
    printf("= Salario Liquido = R$%.2f\n", salarioLiquido);


    return 0;
}
