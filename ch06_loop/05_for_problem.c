#include <stdio.h>

// 구구단 2~9단 출력
// 반복문 1개 → i : 2~9단
// 반복문 1개 → 단 (ix2~ix9)

int main() {
    for(int i = 2; i<= 9; i++) { //2단인지, 3단인지 , 단수를 결정
        for(int j = 1; j <= 9; j++) { // x1 ~ x9까지 출력력
            printf("%d x %d = %d",i, j, i*j);
            printf("\n");
        }
    }
}