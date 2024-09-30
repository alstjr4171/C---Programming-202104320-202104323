#include <iostream>
using namespace std; // std::�� �����ϱ� ���� ǥ�� ���ӽ����̽� ���


// ������ �����ϱ� ���� Add Ŭ������ �����
class Add {
private: // �߿��� ����� �ٸ� Ŭ������ ��ü���� ������ �� ������ ��ȣ�ϱ� ���� private ����
    int a, b; // �Է� ���� �� ������ ������ private ��� ����
public: // Add Ŭ���� �ۿ����� ���� �� �� �ְ� public ����
    void setValue(int x, int y); // a�� b�� ���� �����ϴ� �޼���
    int calculate(); // a�� b�� ������ �����ϴ� �޼���
};

// a�� b�� ���� �����ϴ� Add ������
void Add::setValue(int x, int y) {
    a = x; // �Ű����� x�� ��� ���� a�� �Ҵ�
    b = y; // �Ű����� y�� ��� ���� b�� �Ҵ�
}

// ������ ����ϴ� Add ������
int Add::calculate() {
    return a + b; // a�� b�� ������ ��ȯ
}

// ������ �����ϱ� ���� Sub Ŭ������ �����
class Sub {
private:
    int a, b;
public:
    void setValue(int x, int y); // a�� b�� ���� �����ϴ� �޼���
    int calculate(); // a�� b�� ������ �����ϴ� �޼���
};

// a�� b�� ���� �����ϴ� sub ������
void Sub::setValue(int x, int y) {
    a = x;
    b = y;
}

// ������ ����ϴ� Sub ������
int Sub::calculate() {
    return a - b; // a�� b�� ������ ��ȯ
}

// ������ �����ϱ� ���� Mul Ŭ������ �����
class Mul {
private:
    int a, b;
public:
    void setValue(int x, int y); // a�� b�� ���� �����ϴ� �޼���
    int calculate(); // a�� b�� ������ �����ϴ� �޼���
};

// a�� b�� ���� �����ϴ� Mul ������
void Mul::setValue(int x, int y) {
    a = x;
    b = y;
}
// ������ ����ϴ� Mul ������
int Mul::calculate() {
    return a * b; // a�� b�� ������ ��ȯ
}

// �������� �����ϱ� ���� Div Ŭ������ �����
class Div {
private:
    int a, b;
public:
    void setValue(int x, int y); // a�� b�� ���� �����ϴ� �޼���
    int calculate(); // a�� b�� �������� �����ϴ� �޼���
};
// a�� b�� ���� �����ϴ� Div ������
void Div::setValue(int x, int y) {
    a = x;
    b = y;
}
// �������� ����ϴ� Div ������
int Div::calculate() {
    return a / b; // a�� b�� �������� ��ȯ
}

int main() {
    Add a; // Add Ŭ������ ���� ��ü ����
    Sub s; // Sub Ŭ������ ���� ��ü ����
    Mul m; // Mul Ŭ������ ���� ��ü ����
    Div d; // Div Ŭ������ ������ ��ü ����
    int x, y; // �Է� ���� ������ ����
    char c; // �����ڸ� ������ ����(�����ڴ� �����̱� ������ char ����)

    // while���� true�� �־� ���� ����
    while (true) {
        cout << "�� ������ �����ڸ� �Է��ϼ���>>"; // ����ڿ��� �� ������ �����ڸ� �Է��϶�� ����Ϳ� ������ִ� �ڵ�
        cin >> x >> y >> c; // ����ڿ��� ���� 2���� �����ڸ� �Է� �޴´�
        if (c == '+') { // �Է¹��� c ������ �����ڰ� �������� Ȯ��
            a.setValue(x, y); // ��ü a�� ��� �Լ� setValue�� �����Ͽ� x, y�� �� ����
            cout << a.calculate() << endl; // ��ü a�� ��� �Լ� calculate�� ����� ��ȯ���� ���
        }
        else if (c == '-') { // �Է¹��� c ������ �����ڰ� �������� Ȯ��
            s.setValue(x, y); // ��ü s�� ��� �Լ� setValue�� �����Ͽ� x, y�� �� ����
            cout << s.calculate() << endl; // ��ü s�� ��� �Լ� calculate�� ����� ��ȯ���� ���
        }
        else if (c == '*') { // �Է¹��� c ������ �����ڰ� �������� Ȯ��
            m.setValue(x, y); // ��ü ,m�� ��� �Լ� setValue�� �����Ͽ� x, y�� �� ����
            cout << m.calculate() << endl; // ��ü m�� ��� �Լ� calculate�� ����� ��ȯ���� ���
        }
        else if (c == '/') { // �Է¹��� c ������ �����ڰ� ���������� Ȯ��
            d.setValue(x, y); // ��ü d�� ��� �Լ� setValue�� �����Ͽ� x, y�� �� ����
            cout << d.calculate() << endl; // ��ü d�� ��� �Լ� calculate�� ����� ��ȯ���� ���
        }
    }
}