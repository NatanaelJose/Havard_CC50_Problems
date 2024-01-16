#include <stdio.h>

int main()
{

    int number;
    do
    {
        printf("Digite um numero inteiro entre 1 e 8: ");
        if (scanf("%d", &number) != 1) {
            printf("Entrada invalida. Por favor, insira um numero inteiro.\n");
            while (getchar() != '\n'); 
        }
    }
    while(number < 1 || number > 8);

    for(int j = 0; j < number; j++)
    {
        for(int spc = number; spc >= j; spc--)
        {
            printf(" ");
        }
        for(int shrp = 0; shrp <= j; shrp++)
        {
            printf("#");
        }
        printf("  ");
        for(int shrp = 0; shrp <= j; shrp++)
        {
            printf("#");
        }
        printf("\n");
    }

}