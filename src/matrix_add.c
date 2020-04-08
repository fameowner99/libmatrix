#include "libmatrix.h"
#include <stdio.h>

t_matrix    matrix_add(t_matrix *a, t_matrix *b)
{
    t_matrix matrix;
    int i;
    int j;

    if (a->rows != b->rows && a->columns != b->columns)
    {
        printf("Wrong matrix addition\n");
        exit(666);
    }

    matrix = matrix_allocate(a->rows, b->columns);
    i = 0;
    while (i < a->rows)
    {
        j = 0;
        while (j < a->columns)
        {
            matrix.data[i][j] = a->data[i][j] + b->data[i][j];
            ++j;
        }
        ++i;
    }
    return (matrix);
}