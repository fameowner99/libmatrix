#include "libmatrix.h"

t_matrix    matrix_copy(t_matrix *matrix)
{
    t_matrix matrix_copy;
    int i;
    int j;

    matrix_copy = matrix_allocate(matrix->rows, matrix->columns);
    i = 0;
    while (i < matrix->rows)
    {
        j = 0;
        while (j < matrix->columns)
        {
            matrix_copy.data[i][j] = matrix->data[i][j];
            ++j;
        }
        ++i;
    }
    matrix_copy.columns = matrix->columns;
    matrix_copy.rows = matrix->rows;
    return (matrix_copy);
}