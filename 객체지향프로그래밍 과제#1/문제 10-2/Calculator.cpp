#include<iostream>
using namespace std; // std::�� �����ϱ� ���� ǥ�� ���ӽ����̽� ���

#include "Calculator.h" // Ŭ���� ������ �ϱ� ���� Ŭ���� ������� ��������� �ҷ���

// a�� b�� ���� �����ϴ� Add ������
void Add::setValue(int x, int y) {
    a = x; // �Ű����� x�� ��� ���� a�� �Ҵ�
    b = y; // �Ű����� y�� ��� ���� b�� �Ҵ�
}
// ������ ����ϴ� Add ������
int Add::calculate() {
    return a + b; // a�� b�� ������ ��ȯ
}

// a�� b�� ���� �����ϴ� sub ������
void Sub::setValue(int x, int y) {
    a = x;
    b = y;
}
// ������ ����ϴ� Sub ������
int Sub::calculate() {
    return a - b; // a�� b�� ������ ��ȯ
}

// a�� b�� ���� �����ϴ� Mul ������
void Mul::setValue(int x, int y) {
    a = x;
    b = y;
}
// ������ ����ϴ� Mul ������
int Mul::calculate() {
    return a * b; // a�� b�� ������ ��ȯ
}

// a�� b�� ���� �����ϴ� Div ������
void Div::setValue(int x, int y) {
    a = x;
    b = y;
}
// �������� ����ϴ� Div ������
int Div::calculate() {
    return a / b; // a�� b�� �������� ��ȯ
}
