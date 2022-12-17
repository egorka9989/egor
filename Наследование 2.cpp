#include<iostream>
using namespace std;
class decimal
{
private:
    unsigned char dec[100];
public:
    decimal(char get[])
    {
        int size = 0;
        for (; *get; size++, get++) {}
        for (int i = 0; i < size; i++)
            dec[size - i] = get[i];
    }
};