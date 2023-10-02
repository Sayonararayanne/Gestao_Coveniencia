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