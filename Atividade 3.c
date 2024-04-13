#include <stdio.h>

int main() {
    char nome[100]; // Vetor para armazenar o nome completo, considerando até 99 caracteres mais o caractere nulo \0
    int contador = 0; // Inicializa o contador de caracteres
    
    // Solicita o nome completo do usuário
    printf("Digite o seu nome completo: ");
    scanf("%[^\n]", nome); // Lê a entrada até encontrar um caractere de nova linha (\n)
    
    // Conta a quantidade de caracteres no nome, percorrendo o vetor até encontrar o caractere nulo \0
    while (nome[contador] != '\0') {
        contador++;
    }
    
    // Exibe a quantidade de caracteres inseridos
    printf("O nome inserido possui %d caracteres.\n", contador);
    
    return 0;
}
