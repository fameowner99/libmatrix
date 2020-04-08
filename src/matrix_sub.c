#include "libmatrix.h"

t_matrix    matrix_sub(t_matrix *a, t_matrix *b)
{
    t_matrix m;
    t_matrix res_matrix;

    m = matrix_mul_scalar(b, -1);
    res_matrix = matrix_add(a, &m);
    matrix_deallocate(&m);
    return (res_matrix);
}