#include <stdio.h>

void m(const char* a, int mas);

int main(void)
{
    int mast = 0;  /* масть */
    int dost = 0;  /* достоинство */

    printf("Введите достоинство (от 6 до 14) и масть карты (от 1 до 4): ");
    scanf("%d%d", &dost, &mast);

    switch (mast)
    {
    case 1:
        m("бубен", dost);
        break;
    case 2:
        m("червей", dost);
        break;
    case 3:
        m("треф", dost);
        break;
    case 4:
        m("пик", dost);
        break;
    default: printf("не найдено\n");
    }
    return 0;
}

void m(const char* a, int mas)
{
    switch (mas)
    {
    case 6:
        printf("шестерка %s", a);
        break;
    case 7:
        printf("семерка %s", a);
        break;
    case 8:
        printf("восьмерка %s", a);
        break;
    case 9:
        printf("девятка %s", a);
        break;
    case 10:
        printf("десятка %s", a);
        break;
    case 11:
        printf("валет %s", a);
        break;
    case 12:
        printf("дама %s", a);
        break;
    case 13:
        printf("король %s", a);
        break;
    case 14:
        printf("туз %s", a);
        break;
    default:  printf("не найдено\n");
    }
}