#include <stdio.h>

int main() {
    int a, b;
    int sum, sub, mul, inv;

    a = 10;
    b = 20;
    sum = a + b; // 더하기 연산(+)
    sub = a - b; // 빼기 연산(-)
    mul = a * b; // 곱하기 연산(*)
    inv = -a; // 음수 연산(-)

    double apple;
    int banana;
    int orange;

    apple = 5.0 / 2,0;
    banana = 5 / 2;
    orange = 5 % 2;

    printf("%.1lf\n", apple);
    printf("%d\n", banana);
    printf("%d\n", orange);

    //복합대입연산자
    // -=, *=, /=, %=
    // a = a + 20; → a+=20
    // a = a * 20; → a*=20
}