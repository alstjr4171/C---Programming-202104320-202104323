// ������ �����ϱ� ���� Add Ŭ������ �����
class Add {
private: // �߿��� ����� �ٸ� Ŭ������ ��ü���� ������ �� ������ ��ȣ�ϱ� ���� private ����
    int a, b; // �Է� ���� �� ������ ������ private ��� ����
public: // Add Ŭ���� �ۿ����� ���� �� �� �ְ� public ����
    void setValue(int x, int y); // a�� b�� ���� �����ϴ� �޼���
    int calculate(); // a�� b�� ������ �����ϴ� �޼���
};

// ������ �����ϱ� ���� Sub Ŭ������ �����
class Sub {
private:
    int a, b;
public:
    void setValue(int x, int y); // a�� b�� ���� �����ϴ� �޼���
    int calculate(); // a�� b�� ������ �����ϴ� �޼���
};

// ������ �����ϱ� ���� Mul Ŭ������ �����
class Mul {
private:
    int a, b;
public:
    void setValue(int x, int y); // a�� b�� ���� �����ϴ� �޼���
    int calculate(); // a�� b�� ������ �����ϴ� �޼���
};

// �������� �����ϱ� ���� Div Ŭ������ �����
class Div {
private:
    int a, b;
public:
    void setValue(int x, int y); // a�� b�� ���� �����ϴ� �޼���
    int calculate(); // a�� b�� �������� �����ϴ� �޼���
};