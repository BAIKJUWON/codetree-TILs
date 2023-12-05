#include <stdio.h>

int main() {
    // 변수 선언
    int a, n;

    // 입력
    scanf("%d %d", &a, &n);
    
    // 출력
    for(int i = 1; i <= n; i++) {
        a += n;
        printf("%d\n", a);
    }

    return 0;
} //오답