#include <stdio.h>

int main()
{
    int start_size;
    int end_size;
    int counter;

    do
    {
        printf("Start Size: ");
        if(scanf("%d", &start_size) != 1)
        {
            printf("Write a intenger number.\n");
            while (getchar() != '\n'); 
        }
    } while (start_size < 9);

    do
    {
        printf("End Size: ");
        if(scanf("%d", &end_size) != 1)
        {
            printf("Write a intenger number.\n");
            while (getchar() != '\n'); 
        }
    } while (end_size < start_size);

    while (start_size < end_size)
    {
        start_size += (start_size/3) - (start_size/4);
        counter++;
    }
    printf("Years: %d", counter);
}