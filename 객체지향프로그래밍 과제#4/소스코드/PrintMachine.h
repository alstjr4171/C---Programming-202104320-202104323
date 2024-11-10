#include <iostream>
#include <string>
using namespace std;

// PrintMachine Ŭ���� ����
class PrintMachine {
    string model, manuf; // �𵨸�� �����縦 �����ϴ� String ���ڿ� ���� ����
    int pcount, avlcount; // �μ� �ż��� ���� ���� ���� �����ϴ� int ������ ���� ����
protected: // �ܺ� Ŭ���������� ���� �Ұ��ϰ� ��ӹ��� �Ļ� Ŭ���������� ���ٰ����ϰ� ��
    PrintMachine(string model, string manuf, int avlcount); // PrintMachine ������
    bool print(int pages); // ���� �ż���ŭ �μ� ���� ���� Ȯ�� �Լ�
    string get_model();    // �𵨸� ��ȯ �Լ�
    string get_manuf();    // ������� ��ȯ �Լ�
    int get_avlcount();    // ���� ���� �� ��ȯ
};

// PrintMachine Ŭ������ ��ӹ޴� PrintInkJet �Ļ� Ŭ���� ����
class PrintInkJet : public PrintMachine { // public ��� ���� ����
    int avlink; // ���� ��ũ ������ �����ϴ� int ������ ���� ����
public:
    PrintInkJet(string model, string manuf, int avlcount, int avlink); // PrintInkJet ������
    bool printInkJet(int pages); // ��ũ�� �����Ϳ� �μ� �Լ�
    void show();                 // ��ũ�� ������ ���� ǥ�� �Լ�
};

// PrintMachine Ŭ������ ��ӹ޴� PrintLaser �Ļ� Ŭ���� ����
class PrintLaser : public PrintMachine {
    int avltoner; // ���� ��� ������ �����ϴ� int ������ ���� ����
public:
    PrintLaser(string model, string manuf, int avlcount, int avltoner); // ������
    bool printLaser(int pages); // ������ �����Ϳ� �μ� �Լ�
    void show();                // ������ ������ ���� ǥ�� �Լ�
};
