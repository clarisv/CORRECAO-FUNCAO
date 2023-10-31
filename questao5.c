#include<stdio.h>

int diasNoMes(int mes){
    int diasMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return diasMes[mes = 1];
}

void calcularidade(int diasNasc, int mesNasc, int anoNasc, int diasAtual, int mesAtual, 
   int anoAtual, int ano, int mes, int dia){  
    if(dia >= diasNasc){
        dia = diasAtual - diasNasc;
    }else{
        dia = diasAtual + diasNoMes(mesNasc) - diasNasc;
        mes = mes - 1;
    }
    if(mes >= mesNasc){
        mes = mesAtual - mesNasc;
    }else{
        mes = mesAtual + 12 - mesNasc;
        ano = ano - 1;
    }
    ano = anoAtual - anoNasc;

    printf("idade: %d anos, %d meses, %d dias", ano, mes, dia);
}

 main(){
    int dia, ano, mes;
    int diaNac, anoNasc, mesNasc;
    printf("digite a data de nascimento (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &diaNac, &mesNasc, &anoNasc);

    printf("digite a data atual (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

 calcularidade(diaNac, mesNasc, anoNasc, ano, mes, dia);

}