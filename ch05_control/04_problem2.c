#include <stdio.h>

int main() {
    //0~100점을 입력 받고, 학점으로 변환해서 출력하는 프로그램

    int score; //점수(0~100)
    char grade; // 학점(A,B,C,D,F)
    printf("점수: ");
    scanf("%d", &score);
    // +유효성 체크: 사용자가 입력한 값이 유요한 값인지 체크
    // 1. 값이 있는지 체크
    // 2. 정수형 숫자인지 체크
    // 3. 0~100 사이의 값인지 범위 체크

    //91~100 A
    //81~90 B
    //71~80 C
    //61~70 D
    //0~60 F

    // 2. 제어부
    if(score >= 91 && score <= 100) {
        grade = 'A';
    }
    if(score >= 81 && score <= 90){
        grade = 'B';
    }
    if(score >= 71 && score <= 80){
        grade = 'C';
    }
    if(score >= 61 && score <= 70){
        grade = 'D';
    }
    else {
        grade = 'F';
    }

    // 3. 출력부부
    printf("당신의 점수는 %d점으로 %c학점입니다", score, grade);
    

}