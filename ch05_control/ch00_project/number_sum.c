#include <stdio.h>

// 1. 정수값 입력 받기! (ex: 412)
// 2. 
// 3. 출력: 4+1+2 = 7

int main() {
    int num = 412;

    int a = num % 10;
    int b = (num / 10) % 10;
    int c = (num / 100) %10;
    int sum = a + b + c;
        
    printf("%d + %d + %d = %d",a, b, c, sum);
    printf("\n");
    printf("=========================\n");

    printf("숫자: ");
    scanf("%d", &num);

    int total = 0;
    while(num > 0){
        total += (num % 10);
        num /= 10;
    }
    printf("총합: %d", total);
    


}