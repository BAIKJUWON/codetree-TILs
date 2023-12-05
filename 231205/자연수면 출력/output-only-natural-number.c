#include <stdio.h>

int main() {
    int i,a,b;

    scanf("%d %d",&a,&b);

    if(a>0){
        for(i=0;i<b;i++){
            printf("%d",a);
        }
    }

    if(a<0){
        printf("%d",0);
    }
    return 0;
}