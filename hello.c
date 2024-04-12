#include <stdio.h>

int main(void) {
    char nome[20];
    printf("What's your name? ");
    scanf("%s", nome); 
    printf("Olá, %s! Bom te conhecer!\n", nome);
    return 0;
}