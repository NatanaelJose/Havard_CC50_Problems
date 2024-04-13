#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(void) {
    char str[600]= "";
    printf("texto: ");
    fgets(str, sizeof(str), stdin);

    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }
    size_t length = strlen(str);

    int palavras = 1;
    int sentencas = 0;
    int letras = 0;

    for(int i = 0; i < length ; i++){
        if(isspace(str[i])){
            palavras++;
        }
        if(str[i] == '!'  || str[i] == '.' || str[i] == '?'){
            sentencas++;
        }
        if(isalpha(str[i])){
            letras++;
        }
    }

    float L = (float) letras / palavras * 100;
    float S = (float) sentencas / palavras * 100;
    float indice = 0.0588 * L - 0.296 * S - 15.8;

    int rounded_indice = round(indice);

    if(rounded_indice < 1) {
        printf("Before Grade 1");
    } else if (rounded_indice > 16) {
        printf("Grade 16+");
    } else {
        printf("Grade: %d", rounded_indice);
    }

    return 0;
}