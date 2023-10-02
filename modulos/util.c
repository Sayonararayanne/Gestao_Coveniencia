#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//função irá verificar se o nome é composto somente por letras e espaços em branco 
int validaNome(char* nome) { //Referências: Função do Professor Flavius (@flgorgonio) e Chatgpt
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
        if (!isdigit(tel[i])) { //verifica se cada caractere do número de telefone é um dígito 
            return 0;
        }
    }
    int tam = strlen(tel);
    if (tam != 11) {
        return 0;
    }
    return 1;
}

//função para validar cpf
int validaCPF(char* cpf) {
    int i, j;
    int dig1 = 0, dig2 = 0;

    for (int i = 0; cpf[i] != '\0'; i++) {
        if (!isdigit(cpf[i])) {
            return 0;
        }
    }
    int tam = strlen(cpf); 
    if (tam != 11) {
        return 0;
    }
    for (i = 0, j = 10; i < 9; i++, j--) { //função baseada na do aluno Gabriel Araújo. 
        dig1 += (cpf[i] - '0') * j;
    }
        dig1 = 11 - (dig1 % 11);
        if (dig1 > 9) {
            dig1 = 0;
    }
    for (i = 0, j = 11; i < 10; i++, j--) {
        dig2 += (cpf[i] - '0') * j;
    }
    dig2 = 11 - (dig2 % 11);
    if (dig2 > 9) {
        dig2 = 0;
    }
    if (dig1 == (cpf[9] - '0') && dig2 == (cpf[10] - '0')) {
        return 0;
    } else {
        return 1;
    }
}