#include <stdio.h>
int main()
{
    int marks[2][3][3] = { {{1, 1, 1},{2, 2, 2},{3, 3, 3}}, {{4, 4, 4}, {5, 5, 5},{6, 6, 5}} };

    int t, r, c;

    for (t = 0; t < 2; t++)
    {
        for (r = 0; r < 3; r++)
        {
            for (c = 0; c < 3; c++)
            {
                printf("%d ", marks[t][r][c]);
            }
            printf("\n");
        }
        printf("\n");
    }
}
