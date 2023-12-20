#include <stdio.h>

int main(){
    for(int i=1;i<=7;i++){
        if(i>1)printf("\n");
        for(int j=0;j<7+i;j++){
            if(j<7-i){
                printf(" ");
            }
            else{
                if(i%2==0){
                    if(j%2==0){
                        printf(" ");
                    }
                    else printf("%d",i);
                }
                else {
                    if(j%2==0)printf("%d",i);
                    else printf(" ");
                }
            }
        }
    }
    return 0;
}
