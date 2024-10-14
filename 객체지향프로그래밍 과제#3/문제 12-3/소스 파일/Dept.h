//클래스 선언부
class Dept {
    int size; // scores 배열의 크기
    int* scores; // 동적 할당 받을 정수 배열의 주소
public:
    Dept(int size) { // 생성자
        this->size = size; // 입력된 매개변수 size를 this를 사용하여 멤버 변수 size에 입력된 크기 저장
        scores = new int[size]; // 주어진 size의 크기만큼의 정수 배열 동적 할당
    }
    ~Dept(); // 소멸자
    int getSize(); // size를 반환하는 함수
    void read(); // 키보드에서 size만큼 입력 받은 정수를 읽어 scores 배열에 저장
    bool isOver60(int index); // index의 학생의 성적이 60보다 크면 true 리턴
};