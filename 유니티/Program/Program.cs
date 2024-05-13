using System;

namespace Program // Note: actual namespace depends on the project name.
{
    #region 클래스
    // 사용자 정의 데이터 유형으로 속성과 함수가
    // 포함되어 있으며, 클래스를 통해 객체를 새성하여
    // 접근하고 사용할수 있는 집합체 
    #endregion
    internal class Program
    {
        // 메인 함수는 프로그램의 진입점 역할을 수행하는 함수 입니다.!
        static void Main(string[] args)
        {
            #region 변수 
            // 데이터를 저장할 수 있는 메모리 공간

            // 변수의 메모리 공간은 실행 될때마다 바뀌며 
            // 여러 개의 변수가 있을때
            // 서로 고유의 메모리 공간을 가진다

            //메모리 공간으로 해당 메모리에 저장된 값을 참조할 수 있다
            // 변수를 생성하기 위해 메모리공간의 크기를 지정해주는 자료형 선언

            #region 자료형
            // 데이터를 저장하기 위해 데이터의 형태를 정해주는 것입니다.

            // 자료형은 각각의 자료형마다 크기가 정해져 있으며,
            //자료형의 크기는
            // 바이트 단위로 이루어져 있으며, 자료형의 경우 자료형에 따라 저장할수 있는 값의 종류가 다르다. 

            //자료형 이름    자료형의 크기     값을 저장할 수 있는 범위 
            //  byte            1byte
            //  bool            1byte
            // char             1byte               -128~ 127
            // short            2byte               -32,768 ~ 32,767
            // int              4byte               -2147483648 ~ 214748367
            // float            4byte
            // double           8byte
            // decimal          12 byte

            #endregion

            #endregion
            bool flag = true;
            int data = 100;
            int number = 12;
            char name = 'A';
            float pi = 3.14f;
            double health = 123.3;

            //Console.WriteLine("Hello World!");
            Console.WriteLine(number);
            Console.WriteLine("flag의 값:" + flag);
            Console.WriteLine("data의 값:" +  data);
            Console.WriteLine("name의 값:" + name);
            Console.WriteLine("pi의 값:" + pi);
            Console.WriteLine("health의 값:" + health);
            // 명령프로프트 창에서 글자를 출력해주는 함수
            // 배열 없이 학생 프로그램 만들기
            // 배열 사용해서 학생 프로그램 만들기
            // 구조체 사용해서 학생 프로그램 만들기
            // 동적할당 가지고 크기 늘어났다 줄어드는 학생 프로그램 만들기 
            // 클래스 사용햐소 학생 프로그램 만들기
        }
    }
}