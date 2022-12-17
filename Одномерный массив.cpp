#include <stdio.h>

int main(void)
{
    int a[10];
    int n;

    printf("N: ");
    scanf("%i", &n);

    int i;
    for (i = 0; i < n; ++i) {
        printf("a[%i] : ", i + 1);
        scanf("%i", &a[i]);
    }


    if (a[0] < a[1]) {
        printf("%i \n", 1);
    }
    else {
        i = 1;
        while ((i < n - 1) && !((a[i - 1] > a[i]) && (a[i] < a[i + 1]))) {
            ++i;
        }
        printf("%i \n", i + 1);
    }
    return 0;
}