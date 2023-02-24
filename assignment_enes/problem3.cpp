#include <iostream>
using namespace std;

void expand(int matrix[][15], int row, int col)
{
    for(int i=row-1; i<=row+1; i++)
    {
        for(int j=col-1; j<=col+1; j++)
        {
            matrix[i][j] = 1;
        }
    }
}

void collapse(int matrix[][15], int row, int col)
{
    for(int i=row-1; i<=row+1; i++)
    {
        for(int j=col-1; j<=col+1; j++)
        {
            matrix[i][j] = 0;
        }
    }
}

void decision(int matrix[][15])
{
    int i,j;
    for (int i = 1; i < 15 - 1; i += 3)
    {
        for (int j = 1; j < 15 - 1; j += 3)
        {
            if (matrix[i][j] == 1)
            {
                expand(matrix, i, j);
            }
            else if (matrix[i][j] == 0)
            {
                collapse(matrix, i, j);
            }
        }
    }
}

void print(int matrix[][15])
{
    int i,j;
    cout << "Result matrix:" << endl;
    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int matrix[15][15] =
    {
            {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1},
            {0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0},
            {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1},
            {0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0},
            {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1},
            {0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0},
            {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1},
            {0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0},
            {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1},
            {0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0},
            {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1},
            {0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0},
            {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1},
            {0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0},
            {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1}
    };
    decision(matrix);
    print(matrix);
    return 0;
}