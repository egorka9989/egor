#include <stdio.h>

int main(void)
{
    int A, B, C;
    printf("A:");
    scanf("%i", &A);

    printf("B:");
    scanf("%i", &B);

    printf("C:");
    scanf("%i", &C);

    printf("%d\n", ((A <= 0) & (B > 0) & (C > 0)) | ((B <= 0) & (A > 0) & (C > 0)) | ((C <= 0) & (B > 0) & (A > 0)));
    return 0;
}