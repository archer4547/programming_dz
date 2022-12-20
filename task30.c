#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

bool repeat(int array[], int N)
{
    for (int i = 0; i < N; i++)
    for (int j = 0; j < N; j++)
    if (array[i] == array[j] && i != j) return true;
    return false;
}

int main(void)
{
    int N = 10, array[N];
    for (int i = 0; i < N; i++)
    {
        srand(time(NULL) + i);
        array[i] = rand() % 31;
        printf("%i ", array[i]);
    }
    printf("\n");
    bool repeated = repeat(array, N);
    if (repeated) printf("array have repeatable numbers\n");
    else printf("array haven`t repeatable numbers\n");
}
