#ifndef LIBMATRIX_H

# define LIBMATRIX_H

typedef struct  s_matrix
{
    double       **data;
    int         rows;
    int         columns;
}               t_matrix;

t_matrix    matrix_allocate(int rows, int columns);
void        matrix_deallocate(t_matrix *matrix);
t_matrix    matrix_copy(t_matrix *matrix);
t_matrix    matrix_mul(t_matrix *a, t_matrix *b);
t_matrix    matrix_mul_scalar(t_matrix *matrix, double value);
t_matrix    matrix_add(t_matrix *a, t_matrix *b);
t_matrix    matrix_sub(t_matrix *a, t_matrix *b);
void        matrix_print(t_matrix *matrix);

#endif