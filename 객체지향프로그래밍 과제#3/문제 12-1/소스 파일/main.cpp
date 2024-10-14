#include<iostream>
#include "Dept.h"
using namespace std;

// 주어진 Dept 객체의 점수를 기준으로 합격한 학생 수를 세는 함수
int countPass(Dept dept) { // 값에 의한 호출로 객체를 매개변수로 받아와 dept 학과에 60점 이상으로 통과하는 학생의 수 리턴
    int count = 0; // 합격자 수를 저장하는 count 변수 초기화
    // getSize 함수를 이용해 리턴 받아온 객체의 배열 size 만큼 반복
    for (int i = 0; i < dept.getSize(); i++) {
        if (dept.isOver60(i)) // isOver60 함수에서 받아온 true, false를 사용해 카운트
            count++; // 즉 60점 이상이면 count 변수가 1씩 증가
    }
    return count; // 최종 합격자 수 반환
}

int main() {
    Dept com(10); // 총 10명이 있는 학과 com 객체 생성
    com.read();  // 총 10명의 학생들의 성적을 키보드로부터 읽어 scores 배열에 저장 
    int n = countPass(com); // com 학과에 60점 이상으로 통과한 학생의 수를 리턴하여 n에 저장
    cout << "60점 이상은 " << n << "명";
}