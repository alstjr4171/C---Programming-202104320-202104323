#include<iostream>
using namespace std;

#include "Calculator.h" // ��ü�� �����ϱ� ���� Ŭ���� ������� ��������� �ҷ���

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
