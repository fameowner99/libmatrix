#include "libmatrix.h"
#include <stdlib.h>

t_matrix        matrix_allocate(int rows, int columns)
{
    t_matrix    matrix;
    int         i;
    int         j;

    matrix.data = (double **)malloc(rows * sizeof(double *));
    i = 0;
    while (i < rows)
    {
        matrix.data[i] = (double *)malloc(columns * sizeof(double));
        j = 0;
        while (j < columns)
        {
            matrix.data[i][j] = 0;
            ++j;
        }
        ++i;
    }
    matrix.rows = rows;
    matrix.columns = columns;
    return (matrix);
}