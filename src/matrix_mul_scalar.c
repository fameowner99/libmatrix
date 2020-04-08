#include "libmatrix.h"

t_matrix    matrix_mul_scalar(t_matrix *matrix, double value)
{
    t_matrix res_matrix;
    int i;
    int j;

    res_matrix = matrix_allocate(matrix->rows, matrix->columns);
    i = 0;
    while (i < matrix->rows)
    {
        j = 0;
        while (j < matrix->columns)
        {
            res_matrix.data[i][j] = matrix->data[i][j] * value;
            ++j;
        }
        ++i;
    }
    return (res_matrix);
}