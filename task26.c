#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int N = 12, move = 4, array[N], temp[move];
    for (int i = 0; i < N; i++)
    {
        srand(time(NULL) + i);
        array[i] = rand() % 13;
        if (rand() % 2) array[i] -= 12;
        printf("%i ", array[i]);
    }
    printf("\n");


    for (int i = 0; i < move; i++) temp[i] = array[N - move + i];

    for (int i = N - 1; i > move - 1; i--) array[i] = array[i - move];

    for (int i = 0; i < move; i++) array[i] = temp[i];

    for (int i = 0; i < N; i++) printf("%i ", array[i]);
    printf("\n");
}
