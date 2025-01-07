#include <stdio.h>

/*
* printf() → 출력
* scanf() → 입력(사용자로부터 값을 입력)
* ex) scanf("%d", &a);
* %d: int형 
*/

int main() {
    int a;
    scanf("%d", &a);
    printf("입력값: %d\n", a);
}