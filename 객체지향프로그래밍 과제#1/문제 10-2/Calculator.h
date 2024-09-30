// 덧셈을 구현하기 위한 Add 클래스의 선언부
class Add {
private: // 중요한 멤버는 다른 클래스나 객체에서 접근할 수 없도록 보호하기 위해 private 설정
    int a, b; // 입력 받은 두 정수를 저장할 private 멤버 변수
public: // Add 클래스 밖에서도 접근 할 수 있게 public 설정
    void setValue(int x, int y); // a와 b의 값을 설정하는 메서드
    int calculate(); // a와 b의 덧셈을 수행하는 메서드
};

// 뺄셈을 구현하기 위한 Sub 클래스의 선언부
class Sub {
private:
    int a, b;
public:
    void setValue(int x, int y); // a와 b의 값을 설정하는 메서드
    int calculate(); // a와 b의 뺄셈을 수행하는 메서드
};

// 곱셈을 구현하기 위한 Mul 클래스의 선언부
class Mul {
private:
    int a, b;
public:
    void setValue(int x, int y); // a와 b의 값을 설정하는 메서드
    int calculate(); // a와 b의 곱셈을 수행하는 메서드
};

// 나눗셈을 구현하기 위한 Div 클래스의 선언부
class Div {
private:
    int a, b;
public:
    void setValue(int x, int y); // a와 b의 값을 설정하는 메서드
    int calculate(); // a와 b의 나눗셈을 수행하는 메서드
};