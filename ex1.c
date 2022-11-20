#include <stdio.h>

int main(){
    int hrsTrabalhadas;
    float salarioHora;
   /* Crie um programa que 1)pergunta quanto ganha um funcionário por hora e o número de horas
trabalhadas no mês. 2)Calcule e 3)mostre o total do seu salário no referido mês, sabendo-se que
são descontados 8% para o INSS, 15% para o Imposto de Renda, e 2% para o sindicato. O
desconto do INSS é sobre o salário bruto e o desconto do IR e sindicato é sobre o salário bruto
– desconto INSS. O programa deve apresentar:
 Salário bruto
 Quanto pagou ao INSS
 Quanto pagou de IR
 Quanto pagou ao sindicato
 Salário líquido*/
    //1)
    printf("Digite sua remuneração por hora por mês e o número de horas trabalhadas: ");
    scanf("%f %d", &salarioHora, &hrsTrabalhadas);

    //2)
    int salarioBrut = salarioHora * hrsTrabalhadas;
    float descontoInss, descontoIr, descontoSindc, salarioLIq;
    //3)
    printf("Seu salário total no mês é: %d\n", salarioBrut);
    descontoInss = 0.08 * salarioBrut;
    descontoIr = 0.15 * (salarioBrut - descontoInss);
    descontoSindc = 0.2 * (salarioBrut - descontoInss);
    salarioLIq = salarioBrut - descontoInss - descontoIr - descontoSindc;
    printf("=========================\n");
    printf("- Salário bruto: %d;\n- Desconto INSS: %.2f;\n- Desconto IR: %.2f;\n- Desconto ao sindicato: %.2f;\n- Salário liquído: %.2f.", salarioBrut, descontoInss,descontoIr,descontoSindc,salarioLIq);
    
    return 0;
}