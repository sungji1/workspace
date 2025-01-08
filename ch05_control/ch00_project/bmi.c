#include <stdio.h>
#include <string.h>

//BMI 계산기
// 1. 입력부(신장, 몸무게)
// 2. 제어부(BMI계산)
// 3. 출력부(BMI 출력)

//BMI지수 공식
// 몸무게(kg) / (신장(m) x 신장(m))
//BMI 범위
// 1. 18.5미만 : 저체중중
// 2. 18.5~23미만: 정상
// 3. 23~26미만 : 과체중
// 4. 26~30미만 :비만
// 5. 30 이상: 고도비만만
int main() {
    // 1. 입력부(신장, 체중)

    int height; // 신장
    int weight; // 체중

    printf("신장(cm): ");
    scanf("%d",&height);
    printf("체중(kg): ");
    scanf("%d", &weight);

    double height_m = (double)height / 100;
    // 2.제어부
    // 2-1. BMI 지수 계산
    double bmiValue = weight / (height_m * height_m);
    printf("%.2lf", bmiValue);
    printf("\n");
    // 2-2. BMI 등급 책정
    char bmiClass[20];
    if(bmiValue < 18.5) {
        strcpy(bmiClass, "저체중");
    }
    if(bmiValue >= 18.5 && bmiValue < 23){
        strcpy(bmiClass, "정상");
    }
    if(bmiValue >= 23 && bmiValue < 26) {
        strcpy(bmiClass, "과체중");
    }
    if(bmiValue >= 26 && bmiValue < 30) {
        strcpy(bmiClass, "비만");
    }
    if(bmiValue >= 30) {
        strcpy(bmiClass, "고도비만");
    }
    // 3. 출력부
    printf("당신의 신장은 %dm, 몸무게는 %dkg으로 ",height, weight);
    printf("BMI지수는 %.2lf로 %s입니다",bmiValue,bmiClass);
}