//Ŭ���� �����
class Dept {
    int size; // scores �迭�� ũ��
    int* scores; // ���� �Ҵ� ���� ���� �迭�� �ּ�
public:
    Dept(int size) { // ������
        this->size = size; // �Էµ� �Ű����� size�� this�� ����Ͽ� ��� ���� size�� �Էµ� ũ�� ����
        scores = new int[size]; // �־��� size�� ũ�⸸ŭ�� ���� �迭 ���� �Ҵ�
    }
    ~Dept(); // �Ҹ���
    int getSize(); // size�� ��ȯ�ϴ� �Լ�
    void read(); // Ű���忡�� size��ŭ �Է� ���� ������ �о� scores �迭�� ����
    bool isOver60(int index); // index�� �л��� ������ 60���� ũ�� true ����
};