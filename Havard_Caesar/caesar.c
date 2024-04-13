#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc , char *argv[]){

    int k = atoi(argv[1]);

    if(argc != 2 || k <= 0){
        printf("Usage: ./caesar key");
        return 1;
    }

    char str[300];
    char cypher_str[300] = "";

    printf("plaintext: ");
    fgets(str, sizeof(str), stdin);

    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    size_t length = strlen(str);
    
    for(int i = 0; i < length; i++) {
        if(isalpha(str[i])){
            char offset = isupper(str[i]) ? 'A' : 'a'; 
            char cypher_char = (str[i] - offset + k) % 26 + offset;
            cypher_str[i] = cypher_char;
        } else {
            cypher_str[i] = str[i];
        }
    }

    printf("Ciphertext: %s\n", cypher_str);
    
    return 0;
}