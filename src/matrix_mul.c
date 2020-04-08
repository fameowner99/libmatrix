#include "libmatrix.h"
#include <stdio.h>

t_matrix    matrix_mul(t_matrix *a, t_matrix *b)
{
    t_matrix matrix;
    double value;
    int i;
    int j;
    int k;

    matrix = matrix_allocate(a->rows, b->columns);
    if (a->columns != b->rows)
    {
        printf("Wrong matrix multiplication\n");
        exit(666);
    }
    i = 0;
    while (i < a->rows)
    {
        j = 0;
        while (j < b->columns)
        {
            k = 0;
            value = 0;
            while (k < b->rows)
            {
                value += b->data[k][j] * a->data[i][k];
                ++k;
            }
            matrix.data[i][j] = value;
            ++j;
        }
        ++i;
    }
    return (matrix);
}