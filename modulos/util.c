#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//função irá verificar se o nome é composto somente por letras e espaços em branco 
int validaNome(char* nome) { //Referências: Função baseada na do Professor Flavius (@flgorgonio) e Chatgpt
    for (int i = 0; nome[i] != '\0'; i++) {
        if (!isalpha(nome[i]) && nome[i] != ' ') {
            return 0;
        }
    }
    return 1;
}

//função para validar telefone
int validaTelefone(char* tel) {
    for (int i = 0; tel[i] != '\0'; i++) {
        if (!isdigit(tel[i])) {
            return 0;
        }
    }
    int tam = strlen(tel);
    if (tam != 11) {
        return 0;
    }
    return 1;
}

int eh_numero(char c){
   if (c >= '0' && c <= '9') {
        return 1;
    } else {
        return 0;
    }
}

//Referências: função para validar cpf do colega @gabrielaraujo
int validaCPF(char* cpf) {
    int i, j;
    int digito_v1 = 0, digito_v2 = 0;

    char numeros_cpf[12]; 
    int len = strlen(cpf);
    int pos = 0;
    for (i = 0; i < len; i++) {
        if (eh_numero(cpf[i])) {
            numeros_cpf[pos++] = cpf[i];
        }
    }
    numeros_cpf[pos] = '\0';

    if (strlen(numeros_cpf) != 11) {
        return 0;
    }
    for (i = 0, j = 10; i < 9; i++, j--) {
        digito_v1 += (numeros_cpf[i] - '0') * j;
    }
    digito_v1 = 11 - (digito_v1 % 11);
    if (digito_v1 >= 10) {
        digito_v1 = 0;
    }
    for (i = 0, j = 11; i < 10; i++, j--) {
        digito_v2 += (numeros_cpf[i] - '0') * j;
    }
    digito_v2 = 11 - (digito_v2 % 11);
    if (digito_v2 >= 10) {
        digito_v2 = 0;
    }
    if (digito_v1 == (numeros_cpf[9] - '0') && digito_v2 == (numeros_cpf[10] - '0')) {
        return 1;
    } else {
        return 0;
    }
}

int validaData(char data){
   if (data >= '0' && data <= '8') {
        return 1;
    } else {
        return 0;
    }
}

int validaCodBarras(char* cod) {
    int i, soma = 0;
    int multiplo = 1;

    for (int i = 0; cod[i] != '\0'; i++) {
        if (!isdigit(cod[i])) {
            return 0;
        }
    }
    int tam = strlen(cod);
    if (tam != 13) {
        return 0;
    }
    for (i = 11; i >= 0; i--) { //Referências: Função baseada na do chatGpt
        int digito = cod[i] - '0';
        soma += digito * multiplo;
        multiplo = (multiplo == 1) ? 3 : 1;
    }
    int digitoVerificador = (10 - (soma % 10)) % 10;
    if (digitoVerificador == cod[12] - '0') {
        return 1;
    } else {
        return 0;
    }
  return 1;
}
