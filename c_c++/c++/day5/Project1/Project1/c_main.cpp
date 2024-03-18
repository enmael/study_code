#include <iostream>

struct Student
{
	char name[20];
	int age;
	int number; // 학생 번호
	
};
int main()
{
	while (true)
	{	
		std::cout << "1. 입력, 2.편집, 3.삭제, 4.출력, 0.나가기" << std::endl;
		int number1; // 메뉴를 선택하기위한 변수값 저장
		std::cin >> number1;
		std::cout << "입력한 숫자" <<number1<< std::endl;
		Student octopus[1];
		int i = 0;
		if (number1 == 1)
		{
			std::cout << "1. 입력모드 입니다!!" << std::endl;
			std::cout << "학번을 입력하세요" << std::endl;
			std::cin >> octopus[i].number;
			std::cout << "이름을 입력하세요!" << std::endl;
			std::cin >> octopus[i].name;
			std::cout << "나이를 입력하세요!" << std::endl;
			std::cin >> octopus[i].age;

			std::cout << "입력된 정보는" << std::endl;
			std::cout << "학번:" << octopus[i].number << "이름:" << octopus[i].name << "나이:" << octopus[i].age << std::endl;
			i++;

		}
		else if (number1 == 2)
		{
			std::cout << "2. 편집모드 입니다!!" << std::endl;
			std::cout << "편집할 학생의 학번을 입력하세요!!" << std::endl;
			int number2 = 0;
			i = 0;
			std::cin >> number2;
			if (number2 == octopus[i].number)
			{
				std::cout << "학번:" << octopus[i].number << "이름:" << octopus[i].name << "나이:" << octopus[i].age << std::endl;
				int number3 = 0;
				std::cout << "학생의 편집할것을 고르세요 1.학번 2.이름 3.나이" << std::endl;
				std::cin >> number3;
				if (number3 == 1)
				{
					std::cout << "학번 변경" << std::endl;
					std::cin >> octopus[i].number;
					std::cout << "변경된 정보" << std::endl;
					std::cout << "학번:" << octopus[i].number << "이름:" << octopus[i].name << "나이:" << octopus[i].age << std::endl;
				}
				else if (number3 == 2)
				{
					std::cout << "이름 변경" << std::endl;
					std::cin >> octopus[i].name;
					std::cout << "변경된 정보" << std::endl;
					std::cout << "학번:" << octopus[i].number << "이름:" << octopus[i].name << "나이:" << octopus[i].age << std::endl;
				}
				else if (number3 == 3)
				{
					std::cout << "나이 변경" << std::endl;
					std::cin >> octopus[i].age;
					std::cout << "변경된 정보" << std::endl;
					std::cout << "학번:" << octopus[i].number << "이름:" << octopus[i].name << "나이:" << octopus[i].age << std::endl;
				}
				else
				{
					std::cout << "메뉴에 없는 숫자입니다" << std::endl;
				}
			}
			else
			{
				std::cout << "존재하지 않는 학번입니다" << std::endl;
			}

		}
		else if (number1 == 3)
		{
			std::cout << "3. 삭제모드 입니다!!" << std::endl;
			std::cout << "삭제할 학생의 학번을 입력하세요" << std::endl;
			std::cout << "학생의 학번을 입력하세요" << std::endl;
			int number2 = 0;
			i = 0;
			std::cin >> number2;
			if (number2 == octopus[i].number)
			{
				std::cout << "학번:" << octopus[i].number << "이름:" << octopus[i].name << "나이:" << octopus[i].age << std::endl;
				octopus[i].number = NULL;
				octopus[i].age = NULL;
				std::cout << "삭제 완료" << std::endl;
			}
			else
			{
				std::cout << "존재하지 않는 학번입니다" << std::endl;
			}
		}
		else if (number1 == 4)
		{
			std::cout << "4. 출력모드 입니다!!" << std::endl;
			std::cout << "전체 학생 리스트 보기는 1, 특정학생보기는2" << std::endl;
			int number3 = 0;
			std::cin >> number3;
			if (number3 == 1)
			{	
				std::cout << "공사중" << std::endl;
				//std::cout << "전체 학생 리스트 보기는 입니다"<< std::endl;
				//for (int j = 0; j < 2; j++)
				//{
				//	std::cout << "학번:" << octopus[j].number << "이름:" << octopus[j].name << "나이:" << octopus[j].number << std::endl;
				//}
			}
			else if (number3 == 2)
			{
				std::cout << "특정학생보기는 입니다" << std::endl;
				std::cout << "학생의 학번을 입력하세요" << std::endl;
				int number2 = 0;
				i = 0;
				std::cin >> number2;
				if (number2 == octopus[i].number)
				{
					std::cout << "학번:" << octopus[i].number << "이름:" << octopus[i].name << "나이:" << octopus[i].age << std::endl;

				}
				else
				{
					std::cout << "존재하지 않는 학번입니다" << std::endl;
				}
			}
			else
			{
				std::cout << "메뉴값이 아닙니다" << std::endl;
			}
		}
		else if (number1 == 0)
		{
			std::cout << "프로그램 종료" << std::endl;
			break;
		}
		else 
		{
			std::cout << "메뉴에 없는 선택지 입니다 다시 입력해주세요!!!!" << std::endl;
		}
	}
	return 0;
}