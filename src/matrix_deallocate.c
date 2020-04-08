#include "libmatrix.h"
#include <stdlib.h>

void    matrix_deallocate(t_matrix *matrix)
{
    int i;

    i = 0;
    while (i < matrix->rows)
    {
        free(matrix->data[i]);
        matrix->data[i] = NULL;
        ++i;
    }
    free(matrix->data);
    matrix->data = NULL;
}