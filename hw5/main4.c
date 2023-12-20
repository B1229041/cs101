#include <stdio.h>

int main()
{
    int i=12345;
    
    int a=i/1%10;
    int b=i/10%10;
    int c=i/100%10;
    int d=i/1000%10;
    int e=i/10000;
    
    printf("%d",e*10000+a*1000+c*100+b*10+d);

    return 0;
}
