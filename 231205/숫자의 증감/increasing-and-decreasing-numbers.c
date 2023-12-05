#include <stdio.h>

int main() {
    char c;
    int n,i;
    scanf("%c %d",&c,&n);
    if(c == 'A'){
        for(i=1;i<=n;i++){
            printf("%d ",i);
        }
    }

    else if(c == 'D'){
        for(i=n;i<=1;i--){
            printf("%d ",i);
        }
    }
    return 0;
}