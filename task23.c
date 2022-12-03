#include <stdio.h>
#include <cs50.h>

int main(void)
{
    const int n = 5;
    int array[n];
    float sum = 0;
    printf("Введіть п'ять чисел:\n");
    for (int i = 0; i < n; i++)
    {
        sum += array[i] = get_int("");
    }
    printf("Середнє арифметичне: %.3f\n", sum / n);
}
