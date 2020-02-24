#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int array[3][4];
    time_t t;
    srand((unsigned)time(&t));

    for (int i = 0; i < 3; i++)
    {
        for (int f = 0; f < 4; f++)
        {
            array[i][f] = rand() % 50;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", array[i][j]);
            if (j == 3)
            {
                printf("\n");
            }
        }
    }
}