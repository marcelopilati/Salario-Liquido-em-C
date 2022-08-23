#include <stdio.h>
void main(){

    float salariol, salariob, horast, valorhora, tempo, adicional, imposto;

    printf("Insira as horas trabalhadas: ");
    scanf("%f", &horast);

    printf("Insira o valor recebido por hora: ");
    scanf("%f", &valorhora);

    printf("Insira os anos trabalhados na empresa: ");
    scanf("%f", & tempo);

    adicional = (tempo / 3) * 2;

    salariob = horast * valorhora + adicional;

    if(salariob >= 0 && salariob <= 1434,00){
        imposto = 0;
    }
    else if(salariob > 1434,00 && salariob <= 2150,00){
        imposto = 7,50;
    }
    else if(salariob > 2150,00 && salariob <= 2866,00){
        imposto = 15,00;
    }
    else if(salariob > 2866,00 && salariob <= 3582,00){
        imposto = 22,50;
    }
    else{
        imposto = 27,50;
    }

    salariol = salariob - imposto;

    printf("O salario liquido e:\n%f", salariol);
}
