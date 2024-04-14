#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(char word[]);

int main(void) {
    char word1[26];
    char word2[26];


    //Player 1 input
    printf("Player 1: ");
    fgets(word1, sizeof(word1), stdin);

    size_t length1 = strlen(word1);
    
    //Player 2 input
    printf("Player 2: ");
    fgets(word2, sizeof(word2), stdin);

    size_t length2 = strlen(word2);

    //score
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    if(score1 > score2){
        printf("Player 1 wins!");
    } else if(score2> score1){
        printf("Player 2 wins!");
    } else {
        printf("Tie!");
    }

    return 0;
}

int compute_score(char word[]){
    int score = 0;
    for(int i = 0; i<strlen(word); i++){
        if(isalpha(word[i])){
            char offset = isupper(word[i])?'A': 'a';
            score += POINTS[word[i] - offset];
        }
    }
    return score;
}