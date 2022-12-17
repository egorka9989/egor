#include <stdio.h>
int main(void)
{
    float a1, a2, a3, sum;
    printf("1:");
    scanf("%f", &a1);
    printf("2:");
    scanf("%f", &a2);
    printf("3:");
    scanf("%f", &a3);
    if ((a1 >= a2) & (a1 >= a3)) {
        if (a2 >= a3) {
            printf("%f\n", a1 + a2);
        }
        else printf("%f\n", a1 + a3);
    }
    else if ((a2 >= a1) & (a2 >= a3))
        if (a1 >= a3) {
            printf("%f\n", a1 + a2);
        }
        else printf("%f\n", a2 + a3);
    else
        if (a1 >= a2) {
            printf("%f\n", a1 + a3);
        }
        else printf("%f\n", a2 + a3);
    return 0;
}