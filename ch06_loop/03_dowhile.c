#include <stdio.h>

int main() {
    int total = 0;

    for(int i = 1; i <= 100; i++) {
        //total = total + i;
        total += i;
        // 끝까지 돌려야 한다 total = 101이다.
        
        // 누적합이 30보다 크면 반복 중단!
        if(total  > 30){
            break;
        }
    }
    printf("1~100까지 합은 %d", total);
}