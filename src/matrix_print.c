#include "libmatrix.h"
#include <stdio.h>

void        matrix_print(t_matrix *matrix)
{
    int     i;
    int     j;

    i = 0;
    while (i < matrix->rows)
    {
        j = 0;
        while (j < matrix->columns)
        {
            printf("%-15f ", matrix->data[i][j]);
            ++j;
        }
        printf("\n");
        ++i;
    }
}