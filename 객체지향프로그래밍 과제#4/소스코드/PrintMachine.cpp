#include "PrintMachine.h" // PrintMachine 헤더 파일

// PrintMachine 클래스 생성자 모델명, 제조사, 초기 용지 수량을 설정
PrintMachine::PrintMachine(string model, string manuf, int avlcount) {
    this->model = model;       // 모델명 설정
    this->manuf = manuf;       // 제조사 설정
    this->avlcount = avlcount; // 초기 용지 수량 설정
}

// PrintMachine 클래스의 print 함수
bool PrintMachine::print(int pages) {
    // 요청한 페이지 수만큼 용지가 있는지 확인
    if (avlcount < pages) { // 용지가 부족할 경우
        cout << "용지가 부족하여 프린트 할 수 없습니다.\n"; // 오류 메시지 출력
        return false; // 인쇄 실패
    }
    avlcount -= pages; // 충분한 용지가 있으면, 남은 용지 수 감소
    return true;       // 인쇄 성공
}

// 모델명 반환 메소드
string PrintMachine::get_model() { return model; }

// 제조사명 반환 메소드
string PrintMachine::get_manuf() { return manuf; }

// 남은 용지 수 반환 메소드
int PrintMachine::get_avlcount() { return avlcount; }

// PrintInkJet 클래스 생성자 모델명, 제조사, 초기 용지 수량, 초기 잉크 수량을 설정
PrintInkJet::PrintInkJet(string model, string manuf, int avlcount, int avlink)
    : PrintMachine(model, manuf, avlcount) { // 기본 프린터 클래스 초기화
    this->avlink = avlink; // 초기 잉크 수량 설정
}

// PirntInkJet 클래스의 printInkJet 함수
bool PrintInkJet::printInkJet(int pages) {
    // 용지가 충분한지 확인
    if (!print(pages)) return false; // 용지가 부족하면 false 반환
    // 잉크 수량 확인
    if (avlink < pages) { // 잉크가 부족할 경우
        cout << "잉크가 부족하여 프린트 할 수 없습니다.\n"; // 오류 메시지 출력
        return false; // 인쇄 실패
    }
    avlink -= pages; // 충분한 잉크가 있으면, 남은 잉크 수 감소
    return true;     // 인쇄 성공
}

// PrintInkJet 클래스의 상태를 출력하는 함수
void PrintInkJet::show() {
    // 모델명, 제조사, 남은 용지와 잉크 수량 출력
    cout << get_model() << "\t," << get_manuf() << "\t,남은 종이 "
        << get_avlcount() << "장\t,남은 잉크 " << avlink << endl;
}

// PrintLaser 클래스 생성자 모델명, 제조사, 초기 용지 수량, 초기 토너 수량을 설정
PrintLaser::PrintLaser(string model, string manuf, int avlcount, int avltoner)
    : PrintMachine(model, manuf, avlcount) { // 기본 프린터 클래스 초기화
    this->avltoner = avltoner; // 초기 토너 수량 설정
}

// PrintLaser 클래스의 printLaser 함수
bool PrintLaser::printLaser(int pages) {
    // 용지가 충분한지 확인
    if (!print(pages)) return false; // 용지가 부족하면 false 반환
    // 토너 수량 확인
    if (avltoner < pages) { // 토너가 부족할 경우
        cout << "토너가 부족하여 프린트 할 수 없습니다.\n"; // 오류 메시지 출력
        return false; // 인쇄 실패
    }
    avltoner -= pages; // 충분한 토너가 있으면, 남은 토너 수 감소
    return true;       // 인쇄 성공
}

// PrintLaser 클래스의 상태를 출력하는 메소드
void PrintLaser::show() {
    // 모델명, 제조사, 남은 용지와 토너 수량 출력
    cout << get_model() << " ," << get_manuf() << "\t,남은 종이 "
        << get_avlcount() << "장\t,남은 토너 " << avltoner << endl;
}
