#include <stdio.h>

int main()
{
    int a=1;
    int b=1;
    int i;
    for(i=1;i<=81;i++){
        if(b<=9){
            if(a<9){
                printf("%d*%d=%d\t",b,a,b*a);
                a=a+1;
            }
            else{
                printf("%d*%d=%d\n",b,a,b*a);
                b=b+1;
                a=1;
            }
        }
    }

    return 0;
}
