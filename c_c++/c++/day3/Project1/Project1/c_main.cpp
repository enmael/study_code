//2024. 03. 14
//3���� ���ǳ���
/*
#include <iostream>

class Cat
{
	//������?
	const char* name;	//�̸�
	char type;			//���� 
	int age;			//����
	float height;		//Ű
	float weight;		//������
	
	//�¾����?
	Cat(const char* _name)
	{
		name = _name;
		std::cout << name << "�� ���� ������" << std::endl;
		std::cout << "�߿�" << std::endl;
	}
	~Cat()
	{
		std::cout << name << "�� ������ �λ��̿���!!!!!" << std::endl;
	}
	//����� �����̸�?
};
*/
//��� �Ҵ��Ұ�����? ������?

#include <iostream>

class Cat
{
public:
	const char* name;
public:
	Cat() {}
	Cat(const char* _name) : name(_name)
	{
		std::cout << name << " ����� ����" << std::endl;
	}

	~Cat()
	{
		std::cout << name << "����� �Ҹ�" << std::endl;
	}


};

Cat cat1("�߿���1");

int main()
{
	Cat cat2("�߿���2");

	new Cat("�߿���3");


	return 0;
}
