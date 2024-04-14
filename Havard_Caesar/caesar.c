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

    printf("plaintext: ");
    fgets(str, sizeof(str), stdin);

    size_t length = strlen(str);

    if (str[length - 1] == '\n') {
        str[length - 1] = '\0';
    }

    
    for(int i = 0; i < length; i++) {
        if(isalpha(str[i])){
            char offset = isupper(str[i]) ? 'A' : 'a'; 
            char cypher_char = (str[i] - offset + k) % 26 + offset;
            str[i] = cypher_char;
        } else {
            str[i] = str[i];
        }
    }

    printf("Ciphertext: %s\n", str);
    
    return 0;
}