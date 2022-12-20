#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int N = 20, count = 0, num_check = 0, repeat_check = 0, array[N], repeat[N / 2];
    for (int i = 0; i < N; i++)
    {
        srand(time(NULL) + i);
        array[i] = rand() % 11;
        printf("%i ", array[i]);
    }
    printf("\n");

    for (int i = 0; i < N / 2; i++) repeat[i] = -1;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        if (array[i] == array[j] && i != j) num_check = 1;

        for (int j = 0; j < N / 2; j++)
        if (array[i] == repeat[j])
        {
            repeat_check = 1;
            break;
        }

        if (num_check && !repeat_check)
        {
            repeat[count] = array[i];
            count++;
        }

        num_check = repeat_check = 0;
    }

    for (int i = 0; i < count; i++) printf("%i ", repeat[i]);
}
