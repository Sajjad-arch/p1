
#include <stdio.h>

int main(void)
{
    int M, N, O;

    // Input for N, M, and O
    printf("Enter the value of M, N, O : ");
    scanf("%d %d %d", &M, O, N);

    // Check if O is divisible by N and O is less than or equal to M
    if (O % N == 0 && O <= M)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}
