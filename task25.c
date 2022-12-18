#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int N = 10, array[N];
    for (int i = 0; i < N; i++)
    {
        srand(time(NULL) + i);
        array[i] = rand() % 11;
        if (rand() % 2) array[i] -= 10;
        printf("%i ", array[i]);
        if (i == (N / 2) - 1) printf("| ");
    }
    printf("\n");

    for (int i = 0; i < N / 4; i++)
    {
        int temp = array[i];
        array[i] = array[(N / 2) - i - 1];
        array[(N / 2) - i - 1] = temp;
    }

    for (int i = N / 2; i < (N / 2) + (N / 4); i++)
    {
        int temp = array[i];
        array[i] = array[N / 2 + N - i - 1];
        array[N / 2 + N - i - 1] = temp;
    }

    for (int i = 0; i < N; i++)
    {
        printf("%i ", array[i]);
        if (i == (N / 2) - 1) printf("| ");
    }
    printf("\n");
}
