#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int N = 30, left = 0, right = N - 1, array[N], check, temp, number;
    printf("Number: ");
    scanf("%i", &number);

    for (int i = 0; i < N; i++)
    {
        srand(time(NULL) + i);
        array[i] = rand() % 101;
        printf("%i ", array[i]);
    }
    printf("\n");

    do
    {
        check = 0;
        for (int i = 0; i < N - 1; i++)
        {
            if (array[i] > array[i + 1])
            {
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                check = 1;
            }
        }
    }
    while (check);

    for (int i = 0; i < N; i++) printf("%i ", array[i]);
    printf("\n");
    check = 0;

    while ( right >= left )
    {
        temp = (right + left) / 2;
        if (number == array[temp])
        {
            check = 1;
            break;
        }
        if (number < array[temp]) right = temp - 1;
        if (number > array[temp]) left = temp + 1;
    }

    if (!check)
        printf("not found\n");
    else
        printf("found\n");
}
