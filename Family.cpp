/*
HW NUMBER: 2
FILE NAME : Family.cpp
AUTHOR : ��ǻ�Ͱ��а� 2�г� C311015 ������
YYYYMMDD : 2024.07.03
PURPOSE :  1. 4���� ������ ������ �ǽ����� 4-1�� ������ �н��Ͻÿ�. (�������� ����)
                    2. 4���� �ǽ����� 4-9,4-10�� ���� ������ �Ǿ��ִ� �������̴�, ������ �������� ���� �ҽ��ڵ带
                        �ۼ��ϰ� �� �������� ���̽ÿ�.
                        1) �ǽ����� 4-9,4-10 ��ο��� ���Ǵ� Person class�� member variables & functions��
                            ��� ���ļ� ���յ� Person class�� �ۼ��Ͻÿ�.
                        2) 4-9�� ��°���� ���� �� �ֵ��� Person class�� main() �Լ��� �ۼ��Ͻÿ�.
                        3) �ǽ����� 4-10���� ������ main()�� �۵��ǵ��� Person class�� Family class�� �ʿ���
                            member���� �߰��Ͽ� �ڵ带 �ϼ��Ͻÿ�.
                        4) 1)~3)���� �ۼ� �� �ڵ��� ��°���� 4-9�� 4-10�� ��°�� ��θ� ������� �����ϰ�
                            ����� �� �־�� �մϴ�.
                        5) 3�� ���� 3-11���� ������ �� ����, ���� 1)~3)���� �ۼ� �� �ڵ带 ������ ���� header
                            ���ϰ� cpp���ϵ�� �и��Ͽ� ���ۼ��Ͻÿ�:
                                    Person.h, Family.h, Person.cpp, Family.cpp, main.cpp
*/

#include "Family.h"     // Family ������� include

Family::Family(string name, int size) {     // size ������ŭ Person �迭 ���� ����
	p = new Person[size];	// Person�迭 ���� �޸� �Ҵ�
	this->size = size;		// size���� �ʱ�ȭ
	familyName = name;	// ���� �̸� �ʱ�ȭ
}
void Family::setName(int i, string nameIn) {    // �߰��� ��� �Լ�
	p[i].set(nameIn, "");		// PersonŬ������ set�Լ� �̿�, ��ȭ��ȣ�� �ʿ�����Ƿ� ���� ���ڿ��� �ʱ�ȭ
}
void Family::show() {       // ��� ���� ������ ���
	cout << familyName << "������ ������ ���� " << size << "�� �Դϴ�." << endl;    // ���� �̸��� size�� �̿��Ͽ� ���
	for (int i = 0; i < size; i++)
		cout << p[i].getName() << '\t';		// PersonŬ������ getName�Լ��� name���� ����
	cout << endl;
}
Family::~Family() {     // FamilyŬ������ �Ҹ���
	delete[] p;		// Person�迭 �޸� ��ȯ
}

template <class T>
void swap(T& a, T& b) {
    T tmp;
    tmp = a;
    a = b;
    b = tmp;
}