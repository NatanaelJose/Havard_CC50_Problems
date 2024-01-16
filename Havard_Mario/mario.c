#include <stdio.h>

int main(void)
{
    int number;
    do
    {
        printf("Digite um numero inteiro entre 1 e 8: ");
        scanf("%d", &number);
    }
    while(number < 1 || number > 8);

    for(int j = 0; j < number; j++)
    {
        for(int n = 0; n <= j; n++)
        {
            printf("#");
        }
        printf("\n");
    }

}