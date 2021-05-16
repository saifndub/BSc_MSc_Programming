int FuncA(int* A, int* B, int *C);
int FuncB(int A, int B, int C);

int main(void)
{
    int A;
    int B;
    int C;

    FuncA(&A, &B, &C);
    FuncB(A, B, C);
}

int FuncA(int* A, int* B, int* C)
{
    printf("Enter 3 number:");
    scanf("%d %d %d", A, B, C);
}

int FuncB(int A, int B, int C)
{
    // ...

    }
