#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int N = 10, array[N], max1 = 0, max2 = 0;
    for (int i = 0; i < N; i++)
    {
        srand(time(NULL) + i);
        array[i] = rand() % 11;
        if (rand() % 2) array[i] -= 10;
    }

    for (int i = 0; i < N - 1; i++) if (array[max1] < array[i + 1]) max1 = i + 1;

    if (max1 == 0) max2 = 1; for (int i = 0; i < N - 1; i++) if (array[max2] <= array[i + 1] && i + 1 != max1) max2 = i + 1;

    printf("[%i]=%i, [%i]=%i\n", max1, array[max1], max2, array[max2]);
}
