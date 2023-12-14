#include <stdio.h>

int main()
{
    int i = 256;
    if (i & (i-1))
    {
        printf("false");
    }
    else
    {
        printf("true");
    }
    return 0;
}
