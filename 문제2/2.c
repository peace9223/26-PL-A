#include <stdio.h>
#define MAXROWS 100
#define MAXCOLS 100

typedef struct matrix {
	int rows, cols;
	int data[MAXROWS][MAXCOLS];
} Matrix;

void print_matrix(Matrix* m) {
	for (int i = 0; i < m->rows; i++)
	{
		for (int j = 0; j < m->cols; j++)
		{
			printf("%2d ", m->data[i][j]);
		}
		printf("\n");
	}
}
void add_matrix(Matrix* a, Matrix* b, Matrix* c) {
	int row = a->rows;
	int cols = a->cols;

	c->rows = row;
	c->cols = cols;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			c->data[i][j] = b->data[i][j] + a->data[i][j];
		}
	}
}
void sub_matrix(Matrix* a, Matrix* b, Matrix* c) {
	int row = a->rows;
	int cols = a->cols;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			c->data[i][j] = a->data[i][j] - b->data[i][j];
		}
	}
}

int main()
{
	Matrix A = { 3,3, {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}} };
	Matrix B = { 3,3, {{11, 12, 13}, {14, 15, 16}, {17, 18, 19} } };
	Matrix C;
	printf("A = \n"); print_matrix(&A);
	printf("B = \n"); print_matrix(&B);
	add_matrix(&A, &B,&C);
	printf("A + B = \n"); print_matrix(&C);
	sub_matrix(&B, &A, &C);
	printf("B - A = \n"); print_matrix(&C);
	return 0;
}