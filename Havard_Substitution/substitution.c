#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: ./substitution key\n");
        return 1;
    }

    char key[27];
    strcpy(key, argv[1]); 

    if (strlen(key) != 26) {
        printf("The key must have 26 characters\n");
        return 1;
    }

    int found[26] = {0}; 
    for (int i = 0; i < 26; i++) {
        if (!isalpha(key[i])) {
            printf("The key must only consist of letters\n");
            return 1;
        }
        int index = tolower(key[i]) - 'a';
        if (found[index]) {
            printf("Each letter must appear exactly once in the key\n");
            return 1;
        }
        found[index] = 1;
    }

    char str[300];

    printf("plaintext: ");
    fgets(str, sizeof(str), stdin);

    size_t length = strlen(str);

    if (str[length - 1] == '\n') {
        str[length - 1] = '\0';
    }

    for(int i = 0; i< length; i++) {
        if(isalpha(str[i])) {
            char offset = isupper(str[i]) ? 'A' : 'a';
            int cypher_char = str[i] - offset;
            if(offset == 'a'){
                str[i] = tolower(key[cypher_char]);
            } else {
                str[i] = toupper(key[cypher_char]);
            }
        }
    }
    printf("Ciphertext: %s\n", str);

    return 0;
}
