// 2024 _03_12
/*
#include<iostream> // ����� �Լ�

struct A
{

};


int main()
{
	printf("Hello world : %d\n", 12);
	std::cout << "Hello world" << 12 << std::endl;
	
	//1
	A* a;
	//malloc(size);
	a = (A*)malloc(sizeof(A));  // Heap
	//+ A������ �߰�
	
	//2
	a = new A;					// Heap
	// �׷��ϱ� 1�̶� 2�� �����Ŷ�� �����

	return 0;

}
*/

//�⺻ �����Ϳ� ����� ���� �Ҽ��ִ�
//������ + ��� = ������ ��ġ�� ǥ���Ҽ� �ִ�?????
//�̷������� ǥ���ϴ� ���� : �����Ϳ� ����� ������ ��� ��ü�� ǥ�� �Ҽ� �ִ�!!!!
//�츮�� ���°� ����ü �� Ŭ������ �ٲ�� �׷��ϱ� Ŭ������ ���ؼ� ����!!!
//��ü ������ �� : ���󼼰迡���� �޸� �Ҵ� 
//Ŭ�󽺿�  ��ü ������ �ϴ� ����  : ����� �ٺ��� 
//�߻�ȭ == ��� 
//�̰� �̰Ŵٶ�� �����ϴ°�
//������ ��������°�???
//�ѹ��� �ΰ��� �޾� �帱�� �ִµ��� �Ѱ谡 �ִ� 
//�׷��� �ڷḦ ���� ������ ���ϰ� ���� �Ҽ��ִ�!!!!
//�߻�ȭ : �߿��� Ư¡�� ã�Ƽ� ���ĵа�  
// �׷��ϱ�
// �����Ͷ� ����� ���ļ� ���� ǥ������
// �׷��� ���� ���� ���� ��ü���� ����̴� 
// ��ü ������ ����ü���� Ȯ��� �����̴�
// ��ü����� Ŭ���� ����� ���信 ���ؼ� �����϶� �̳�� 
/*
#include <iostream>

struct Human
{
	const char* name;
	int age;
	float height;
	float weight;

	void Eat()
	{
		std::cout << name << "�̰� ���� �Դ�." << std::endl;
	}
	void Sleep()
	{
		std::cout << name << "�̰� ���� �ܴ�." << std::endl;
	}
	void Defecate()
	{
		std::cout << name << "�̰� ������ ����." << std::endl;
	}

};

int main()
{
	//������ + ���
	Human human1;
	human1.name = "���";
	human1.age = 1;
	human1.height = 50.0;
	human1.weight = 25.0;

	human1.Eat();
	human1.Sleep();
	human1.Defecate();



	return 0;
}
*/
// ��ɰ� �����͸� ���ļ� �տ� ���̴� �繰�� �ѹ� ǥ���غ���
/*
#include <iostream>
struct fountain_pen
{
	const char* name;
	int Date_Manufacture;
	float height;
	float weight;
	
	void write()
	{
		std::cout << name << "�� ���̿� ����." << std::endl;
	}
	void charge()
	{
		std::cout << name << "�� ��ũ�� �����ϴ�." << std::endl;
	}
};

int main()
{
	fountain_pen kaweco;
	kaweco.name = "sports";
	kaweco.Date_Manufacture = 2023;
	kaweco.height = 5.0;
	kaweco.weight = 200.0;
	kaweco.write();
	kaweco.charge();

	fountain_pen parker;
	kaweco.name = "51";
	kaweco.Date_Manufacture = 2024;
	kaweco.height = 5.0;
	kaweco.weight = 200.0;
	kaweco.write();
	kaweco.charge();

	return 0;
}
*/
//���󼼰�
//��ü������ �ȶ��� ����� ���Ѱ��̾ƴ϶� �׳� �Ϲ����� ��� 
//0.001�� ������ ����� �������� 99%�� ��������
//�̼����� �ù����̼��� �ƴ��� ������ �����̴�

/*
#include <iostream>
struct Human
{
	const char* name;

	//�޸𸮿� �Ҵ�Ǿ����� ȣ��Ǵ� �Լ�
	//������ : �����Ǿ����� ȣ�� �Ǵ� �Լ� ����ü�̸�()
	Human()
	{
		std::cout << "�¾" << std::endl;
	}
	//�޸𸮿��� ���� �Ǿ����� ȣ��Ǵ� �Լ�
	//�Ҹ��� : �Ҹ�Ǿ����� ȣ�� �Ǵ� �Լ� ~����ü�̸�()
	~Human()
	{
		std::cout << "�¾" << std::endl;
	}

};

int main()
{



	return 0;
}
*/
/*
#include <iostream>
struct Human
{
	const char* name;

	//�޸𸮿� �Ҵ�Ǿ����� ȣ��Ǵ� �Լ�
	//������ : �����Ǿ����� ȣ�� �Ǵ� �Լ� ����ü�̸�()
	Human()
	{
		std::cout << "�¾" << std::endl;
	}
	//�޸𸮿��� ���� �Ǿ����� ȣ��Ǵ� �Լ�
	//�Ҹ��� : �Ҹ�Ǿ����� ȣ�� �Ǵ� �Լ� ~����ü�̸�()
	~Human()
	{
		std::cout << "����" << std::endl;
	}

};

Human human; //  �¾
// �׷��ϱ� �̼��� main�� �¾�� ������ ���� ������ �� ������ ���ϸ� ���� �Ҹ��Ѵ�

int main()
{	
	int kaweco; // ������ ��������� ���ڷ� ��������� ������ ������ �Ҹ��ϴ� ����
	std::cout << "main �Լ� ����" << std::endl;


	std::cout << "Hello world" << std::endl;




	std::cout << "Return 0" << std::endl;
	return 0;
}
*/

/*
#include <iostream>

struct Human
{
	const char* name;

	//�޸𸮿� �Ҵ�Ǿ����� ȣ��Ǵ� �Լ�
	//������ : �����Ǿ����� ȣ�� �Ǵ� �Լ� ����ü�̸�()
	Human()
	{
		std::cout << "�¾" << std::endl;
	}
	//�޸𸮿��� ���� �Ǿ����� ȣ��Ǵ� �Լ�
	//�Ҹ��� : �Ҹ�Ǿ����� ȣ�� �Ǵ� �Լ� ~����ü�̸�()
	~Human()
	{
		std::cout << "����" << std::endl;
	}

};

int main()
{
	// �׷��ϱ� �츮 ��(���α׷���)�� main �̶�� ������ ������µ�
	// main �̶�� ������ ���ֵ� ��Ƴ��� ���簡 Human �̶�� �����̴�
	// �츮�� ������µ� ���� â���ְ� ���ִµ��� ��Ƴ���
	// �׷��� �ռ� �����ָ� �ؼ� delete �� �׿�������
	// �ּҷ� ���� �Ѵ�
	Human* p = new Human;

	std::cout << "delete ��" << std::endl;

	delete p;  // delete �ּ�;
	//�ּҷ� ���� �Ҵ�� ���� ����

	std::cout << "delete ��" << std::endl;

	return 0;
}
*/
/*
#include <iostream>
struct Human
{
	// ���� + �Լ� 
	const char* name;
	// �����Ǹ� �۵��ϴ� �Լ�
	Human()
	{
		std::cout << "�¾" << std::endl;
	}

	// ������ �����ε�
	

	// �Ҹ�Ǹ� �۵��Ǵ� �Լ�
	~Human()
	{
		std::cout << name << "����" << std::endl;
	}

};

int main()
{
	Human a;
	a.name = "a";
	Human b;
	b.name = "b";
	// ���� ���� 
	return 0;
	// �ڷ� ���� ����??
	// ���� �޸�??????
	// ���� �޸� != �ڷ� ������ ����
	// ���� �ٸ��� 

}
*/

#include <iostream>

struct Human
{
	const char* name;

	//���� + �Լ�

	// �޸� �Ҵ� �����ִ°� �ƴ�
	//�Լ� : �Ҵ�Ǿ����� ȣ��  == ������ == constructor
	Human()
	{
		std::cout << "�¾" << std::endl;
	}

	//�Լ� : ������ �����ε� over loading
	Human(const char* _name)
	{
		name = _name;
		std::cout << name << "�¾" << std::endl;
	}

	//�Լ� : �Ҹ� �Ǿ����� ȣ��  == �Ҹ��� == destructor
	~Human()
	{
		std::cout << name << "����" << std::endl;
	}

};

int main()
{
	Human a;
	a.name = "a";
	//���� �Ͱ� �Ʒ����� ������ �׸��� ����Ϸ��� �߰� ���� �۾��� ������Ѵ�.
	Human b("b");


	return 0;
}