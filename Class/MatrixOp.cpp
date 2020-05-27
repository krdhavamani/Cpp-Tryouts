/*
Create a class called 'Matrix' containing constructor that initializes the number of rows and the number of columns of a new Matrix object. The Matrix class has the following information:
1 - number of rows of matrix
2 - number of columns of matrix
3 - elements of matrix (You can use 2D vector)
The Matrix class has functions for each of the following:
1 - get the number of rows
2 - get the number of columns
3 - set the elements of the matrix at a given position (i,j)
4 - adding two matrices.
5 - multiplying the two matrices
You can assume that the dimensions are correct for the multiplication and addition.
*/

#include <iostream>

class Matrix
{
    Matrix()
    {
        int Rows;
        int Columns;
        std::vector<std::vector<int>> matrix;
    }

    void getRows()
    {
        std::cout << "Enter the number of rows:";
        std::cin >> Rows;
    }

    void getColumns()
    {
        std::cout << "Enter the number of columns:" << '\n';
        std::cin >> Columns;
    }

    void setElements()
    {
        std::cout << "Enter the matrix row-wise:" << '\n';
        matrix.resize(Rows);
        for (int i=0; i<Rows; i++)
        {
            matrix[i].resize(Columns);
            for (int j=0; j<Columns; j++)
            {
                std::cin >> matrix[i][j];
            }
        }
    }

    Matrix addMatrices(Matrix A, Matrix B)
    {
        Matrix C;
        C.Rows = A.Rows;
        C.Columns = A.Columns;

        C.matrix.resize(C.Rows);
        for (int i=0; i<C.Rows; i++)
        {
            C.matrix[i].resize(Columns)
            for (int j=0; j<C.Columns; j++)
            {
                C[i][j] = A[i][j] + B[i][j];
            }
        }

        return C;
    }

    Matrix multiplyMatrices(Matrix A, Matrix B)
    {
        Matrix C;
        C.Rows = A.Rows;
        C.Columns = B.Columns;

        C.matrix.resize(C.Rows)
        for (int=0; i<C.Rows; i++)
        {
            C.matrix.resize(C.Columns)
            for (int j=0; j<C.Columns; j++)
            {
                C[i][j]
            }
        }
    }

}
