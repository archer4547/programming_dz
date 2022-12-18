#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int N = 10, array[N];
    for (int i = 0; i < N; i++)
    {
        srand(time(NULL) + i);
        array[i] = rand() % 101;
        printf("%i ", array[i]);
    }
    printf("\n");

    for (int i = 0; i < N - 1; i++)
    {
        for (int j = 0; j < N - 1; j++)
        {
            if (array[j] % 10 > array[j + 1] % 10)
            {
               int temp = array[j];
               array[j] = array[j + 1];
               array[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < N; i++) printf("%i ", array[i]);
    printf("\n");
}
