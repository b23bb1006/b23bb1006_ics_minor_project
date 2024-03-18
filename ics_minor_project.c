#include <stdio.h>
void addition()
{
    int a, b;
    printf("Enter the number of rows in matrix: ");
    scanf("%d", &a);
    printf("Enter the number of coulmns in matrix: ");
    scanf("%d", &b);

    int arr1[a][b], arr2[a][b];

    printf("Enter the first matrix:\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter the second matrix:\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    printf("The addition of these two matrices is:\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d ", arr1[i][j] + arr2[i][j]);
        }
        printf("\n");
    }
    return;
}
void subtraction()
{
    int a, b;
    printf("Enter the number of rows in matrix: ");
    scanf("%d", &a);
    printf("Enter the number of coulmns in matrix: ");
    scanf("%d", &b);

    int arr1[a][b], arr2[a][b];

    printf("Enter the first matrix:\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter the second matrix:\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    printf("The subtraction of these two matrices is:\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d ", arr1[i][j] - arr2[i][j]);
        }
        printf("\n");
    }
    return;
}
void transpose()
{
    int a, b;
    printf("Enter the number of rows in matrix: ");
    scanf("%d", &a);
    printf("Enter the number of coulmns in matrix: ");
    scanf("%d", &b);

    if (a <= 0 || b <= 0)
    {
        printf("Invalid matrix dimensions.\n");
        return;
    }

    int arr1[a][b], arr2[a][b];

    printf("Enter the matrix:\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("%d ", arr1[j][i]);
        }
        printf("\n");
    }
}
void identity()
{
    int n;
    printf("Enter the number of rows/column in matrix: ");
    scanf("%d", &n);
    int arr[n][n];

    printf("Enter the matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == i)
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
}

void trace()
{
    int n, sum = 0;
    printf("Enter the number of rows/column in matrix: ");
    scanf("%d", &n);
    int arr[n][n];
    printf("Enter the matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == i)
            {
                sum = sum + arr[i][j];
            }
        }
    }
    printf("trace : %d ", sum);
}
void scaler()
{
    int n, t1, t2, t3, t4, t5;
    int a, b;
    printf("Enter the number of rows in matrix: ");
    scanf("%d", &a);
    printf("Enter the number of coulmns in matrix: ");
    scanf("%d", &b);

    if (a <= 0 || b <= 0)
    {
        printf("Invalid matrix dimensions.\n");
        return;
    }

    int arr1[a][b];

    printf("Enter the matrix:\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("press 2 for row and 1 for column and 3 for both\n");
    scanf("%d", &t1);
    if (t1 == 1 || t1 == 3)
    {
        printf("column number: \n");
        scanf("%d", &t2);
        printf("write your scaler value \n");
        scanf("%d", &t3);
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                if (t2 == j)
                {
                    arr1[i][j] = arr1[i][j] * t3;
                }
            }
        }
    }
    if (t1 == 2 || t1 == 3)
    {
        printf("row number: \n");
        scanf("%d", &t4);
        printf("write your scaler value \n");
        scanf("%d", &t5);
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                if (t4 == i)
                {
                    arr1[i][j] = arr1[i][j] * t5;
                }
            }
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }
}

void diagonal()
{
    int n;
    printf("Enter the number of rows/column in matrix: ");
    scanf("%d", &n);
    int arr[n][n];
    printf("Enter the matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == i)
            {
                printf("%d ", arr[i][j]);
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
}
void multipication()
{

    int n, i, j, k;

    printf("Enter the value of n : ");
    scanf("%d", &n);
    int a[n][n], b[n][n], c[n][n];
    printf("Enter the elements of Matrix-A: \n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the elements of Matrix-B: \n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < n; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("The product of the two matrices is: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    return;
}
int getSize()
{
    int n;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);
    return n;
}

void getMatrix(int n, int mat[n][n])
{
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);
}

int determinant(int n, int mat[n][n])
{
    int det = 0;
    if (n == 1)
        det = mat[0][0];
    else if (n == 2)
        det = mat[0][0] * mat[1][1] - mat[0][1] * mat[1][0];
    else
    {
        int arr[n - 1][n - 1];
        for (int k = 0; k < n; k++)
        {
            int a = 0, b = 0;
            for (int i = 1; i < n; i++)
            {
                b = 0;
                for (int j = 0; j < n; j++)
                {
                    if (j != k)
                    {
                        arr[a][b] = mat[i][j];
                        b++;
                    }
                }
                a++;
            }
            if (k % 2 == 0)
                det += mat[0][k] * determinant(n - 1, arr);
            else
                det -= mat[0][k] * determinant(n - 1, arr);
        }
    }
    return det;
}

int main()
{
    printf("Type 1 for matrix addition:\n");
    printf("Type 2 for matrix subtraction:\n");
    printf("Type 3 for matrix multiplication:\n");
    printf("Type 4 for determinant value:\n");
    printf("Type 5 for transpose:\n");
    printf("Type 6 to get identity matrix:\n");
    printf("Type 7 for scalar multiplication:\n");
    printf("Type 8 for matrix inverse:\n");
    printf("Type 9 for trace of matrix:\n");
    printf("Type 10 for diagonal of matrix:\n");

    int w;
    scanf("%d", &w);

    switch (w)
    {
    case 1:
        addition();
        break;
    case 2:
        subtraction();
        break;
    case 3:
        multipication();
        break;
    case 4:
    {
        int n = getSize();
        int mat[n][n];
        getMatrix(n, mat);
        int det = determinant(n, mat);
        printf("Determinant: %d\n", det);
        break;
    }

    case 5:
        transpose();
        break;
    case 6:
        identity();
        break;
    case 7:
        scaler();
        break;
    case 9:
        trace();
        break;
    case 10:
        diagonal();
        break;
    default:
        printf("Invalid option\n");
        break;
    }

    return 0;
}