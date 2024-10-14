#include<iostream>
#include "Dept.h"
using namespace std;

// �־��� Dept ��ü�� ������ �������� �հ��� �л� ���� ���� �Լ�
int countPass(Dept dept) { // ���� ���� ȣ��� ��ü�� �Ű������� �޾ƿ� dept �а��� 60�� �̻����� ����ϴ� �л��� �� ����
    int count = 0; // �հ��� ���� �����ϴ� count ���� �ʱ�ȭ
    // getSize �Լ��� �̿��� ���� �޾ƿ� ��ü�� �迭 size ��ŭ �ݺ�
    for (int i = 0; i < dept.getSize(); i++) {
        if (dept.isOver60(i)) // isOver60 �Լ����� �޾ƿ� true, false�� ����� ī��Ʈ
            count++; // �� 60�� �̻��̸� count ������ 1�� ����
    }
    return count; // ���� �հ��� �� ��ȯ
}

int main() {
    Dept com(10); // �� 10���� �ִ� �а� com ��ü ����
    com.read();  // �� 10���� �л����� ������ Ű����κ��� �о� scores �迭�� ���� 
    int n = countPass(com); // com �а��� 60�� �̻����� ����� �л��� ���� �����Ͽ� n�� ����
    cout << "60�� �̻��� " << n << "��";
}