#include <stdio.h>

int main()
{
    triangularNum(10);
}

void triangularNum(int num)
{
    int sum = 0;
    for (int i = 1; i < num; i++)
    {
        sum += i;
        printf("%d ", sum);
    }
}