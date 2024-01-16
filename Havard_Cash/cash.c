#include <stdio.h>

int main()
{
    float number;
    int counter;
    int centavos;
    
    do
    {
        printf("Troca devida: ");
        if (scanf("%f", &number) != 1) {
            printf("Entrada invalida. Por favor, digite um numero!\n");
            while (getchar() != '\n'); 
        }
        centavos = number * 100;
    } 
    while (number <= 0);

    while (centavos > 0)
    {
        if (centavos >= 25)
        {
            counter += centavos/25;
            centavos %= 25;
        }
        else if (centavos >= 10)
        {
            counter += centavos/10;
            centavos %= 10;
        }
        else if (centavos >= 5)
        {
            counter += centavos/5;
            centavos %= 5;
        }
        else if(centavos >= 1)
        {
            counter += centavos/1;
            centavos %= 1;
        }
        else
        {
            break;
        }
    }
    printf("%d", counter);
}