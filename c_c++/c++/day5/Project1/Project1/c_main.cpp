#include <iostream>

struct Student
{
	char name[20];
	int age;
	int number; // �л� ��ȣ
	
};
int main()
{
	while (true)
	{	
		std::cout << "1. �Է�, 2.����, 3.����, 4.���, 0.������" << std::endl;
		int number1; // �޴��� �����ϱ����� ������ ����
		std::cin >> number1;
		std::cout << "�Է��� ����" <<number1<< std::endl;
		Student octopus[1];
		int i = 0;
		if (number1 == 1)
		{
			std::cout << "1. �Է¸�� �Դϴ�!!" << std::endl;
			std::cout << "�й��� �Է��ϼ���" << std::endl;
			std::cin >> octopus[i].number;
			std::cout << "�̸��� �Է��ϼ���!" << std::endl;
			std::cin >> octopus[i].name;
			std::cout << "���̸� �Է��ϼ���!" << std::endl;
			std::cin >> octopus[i].age;

			std::cout << "�Էµ� ������" << std::endl;
			std::cout << "�й�:" << octopus[i].number << "�̸�:" << octopus[i].name << "����:" << octopus[i].age << std::endl;
			i++;

		}
		else if (number1 == 2)
		{
			std::cout << "2. ������� �Դϴ�!!" << std::endl;
			std::cout << "������ �л��� �й��� �Է��ϼ���!!" << std::endl;
			int number2 = 0;
			i = 0;
			std::cin >> number2;
			if (number2 == octopus[i].number)
			{
				std::cout << "�й�:" << octopus[i].number << "�̸�:" << octopus[i].name << "����:" << octopus[i].age << std::endl;
				int number3 = 0;
				std::cout << "�л��� �����Ұ��� ������ 1.�й� 2.�̸� 3.����" << std::endl;
				std::cin >> number3;
				if (number3 == 1)
				{
					std::cout << "�й� ����" << std::endl;
					std::cin >> octopus[i].number;
					std::cout << "����� ����" << std::endl;
					std::cout << "�й�:" << octopus[i].number << "�̸�:" << octopus[i].name << "����:" << octopus[i].age << std::endl;
				}
				else if (number3 == 2)
				{
					std::cout << "�̸� ����" << std::endl;
					std::cin >> octopus[i].name;
					std::cout << "����� ����" << std::endl;
					std::cout << "�й�:" << octopus[i].number << "�̸�:" << octopus[i].name << "����:" << octopus[i].age << std::endl;
				}
				else if (number3 == 3)
				{
					std::cout << "���� ����" << std::endl;
					std::cin >> octopus[i].age;
					std::cout << "����� ����" << std::endl;
					std::cout << "�й�:" << octopus[i].number << "�̸�:" << octopus[i].name << "����:" << octopus[i].age << std::endl;
				}
				else
				{
					std::cout << "�޴��� ���� �����Դϴ�" << std::endl;
				}
			}
			else
			{
				std::cout << "�������� �ʴ� �й��Դϴ�" << std::endl;
			}

		}
		else if (number1 == 3)
		{
			std::cout << "3. ������� �Դϴ�!!" << std::endl;
			std::cout << "������ �л��� �й��� �Է��ϼ���" << std::endl;
			std::cout << "�л��� �й��� �Է��ϼ���" << std::endl;
			int number2 = 0;
			i = 0;
			std::cin >> number2;
			if (number2 == octopus[i].number)
			{
				std::cout << "�й�:" << octopus[i].number << "�̸�:" << octopus[i].name << "����:" << octopus[i].age << std::endl;
				octopus[i].number = NULL;
				octopus[i].age = NULL;
				std::cout << "���� �Ϸ�" << std::endl;
			}
			else
			{
				std::cout << "�������� �ʴ� �й��Դϴ�" << std::endl;
			}
		}
		else if (number1 == 4)
		{
			std::cout << "4. ��¸�� �Դϴ�!!" << std::endl;
			std::cout << "��ü �л� ����Ʈ ����� 1, Ư���л������2" << std::endl;
			int number3 = 0;
			std::cin >> number3;
			if (number3 == 1)
			{	
				std::cout << "������" << std::endl;
				//std::cout << "��ü �л� ����Ʈ ����� �Դϴ�"<< std::endl;
				//for (int j = 0; j < 2; j++)
				//{
				//	std::cout << "�й�:" << octopus[j].number << "�̸�:" << octopus[j].name << "����:" << octopus[j].number << std::endl;
				//}
			}
			else if (number3 == 2)
			{
				std::cout << "Ư���л������ �Դϴ�" << std::endl;
				std::cout << "�л��� �й��� �Է��ϼ���" << std::endl;
				int number2 = 0;
				i = 0;
				std::cin >> number2;
				if (number2 == octopus[i].number)
				{
					std::cout << "�й�:" << octopus[i].number << "�̸�:" << octopus[i].name << "����:" << octopus[i].age << std::endl;

				}
				else
				{
					std::cout << "�������� �ʴ� �й��Դϴ�" << std::endl;
				}
			}
			else
			{
				std::cout << "�޴����� �ƴմϴ�" << std::endl;
			}
		}
		else if (number1 == 0)
		{
			std::cout << "���α׷� ����" << std::endl;
			break;
		}
		else 
		{
			std::cout << "�޴��� ���� ������ �Դϴ� �ٽ� �Է����ּ���!!!!" << std::endl;
		}
	}
	return 0;
}