#include <iostream>
#include "Dept.h"
using namespace std;

// Ŭ���� ������
Dept::Dept(Dept& dept) { // ���� �Ű������� ���� ���� ���� ������
    this->size = dept.size; // ���� ��ü�� size ���� �����Ͽ� ����
    this->scores = new int[this->size]; // ���ο� �迭�� �������� �Ҵ�
    // ���� ��ü�� size��ŭ �ݺ��Ͽ� ������ �ִ� �迭�� ����
    for (int i = 0; i < this->size; i++) { 
        this->scores[i] = dept.scores[i]; 
    }
}

Dept::~Dept() {
    delete[] scores; // ���� �Ҵ�� scores �迭 �޸� ����
}

// size ���� ��ȯ�ϴ� �Լ�
int Dept::getSize() {
    return size; // ����� ������ ������ ��ȯ
}

// Ű���忡�� ������ �Է¹޾� scores �迭�� �����ϴ� �Լ�
void Dept::read() {
    cout << size << "�� ���� �Է�>> "; // ����ڿ��� ���� �Է� �ȳ�
    for (int i = 0; i < size; ++i) { // size��ŭ �ݺ��Ͽ� ���� �Է�
        std::cin >> scores[i]; // ����ڷκ��� ���� �Է¹޾� �迭�� ����
    }
}

// �־��� �ε����� ������ 60�� �̻����� Ȯ���ϴ� �Լ�
bool Dept::isOver60(int index) {
    return scores[index] > 60; // 60�� �ʰ��� true, �׷��� ������ false ��ȯ
}