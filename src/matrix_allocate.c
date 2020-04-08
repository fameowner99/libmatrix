#include "libmatrix.h"
#include <stdlib.h>

t_matrix        matrix_allocate(int rows, int columns)
{
    t_matrix    matrix;
    int         i;
    int         j;

    matrix.data = (float **)malloc(rows * sizeof(float*));
    i = 0;
    while (i < rows)
    {
        matrix.data[i] = (float *)malloc(columns * sizeof(float));
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