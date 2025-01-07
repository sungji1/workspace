#include <stdio.h>

int main() {
    char grade;
    char name[20];

    printf("학점: ");
    scanf("%c", &grade);

    printf("이름: ");
    scanf("%s", name); //문자열은 &기호 사용 안함
    printf("%s의 학점은 %c입니다.", name, grade);
}