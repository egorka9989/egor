#include <stdio.h>
int main(void)
{
    float p;
    printf("P:");
    scanf("%f", &p);
    int k = 1;
    float d = 10, s = 10;
    while (s <= 200) {
        ++k;
        d += d * p / 100;
        s += d;
    }
    printf("K: %i\nS:%f\n", k, s);
    return 0;
}