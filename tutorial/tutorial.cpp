#include "tutorial.h"

int main()
{
	//짝홀수 구별
	/*int num1;
	cin >> num1;

	if (num1 % 2 == 0)
	{
		cout << "짝수" << endl;
	}
	else
	{
		cout << "홀수" << endl;
	}*/

	//숫자 크기 구별
	/*int num2;
	cout << "숫자를 입력하시오: ";
	cin >> num2;

	if (num2 < 10)
	{
		cout << "10보다 작음" << endl;
	}
	else if (num2 < 20)
	{
		cout << "20보다 작음" << endl;
	}
	else if (num2 < 30)
	{
		cout << "30보다 작음" << endl;
	}
	else
	{
		cout << "30이상" << endl;
	}*/

	//switch 조건문
	/*int num3;
	cout << "숫자를 입력하시오: ";
	cin >> num3;

	switch (num3)
	{
	case 1:
		cout << "1입니다." << endl;
		break;
	case 2:
		cout << "2입니다." << endl;
		break;
	case 3:
		cout << "3입니다." << endl;
		break;
	case 4:
		cout << "4입니다." << endl;
		break;

	}*/

	//0부터 100까지 숫자 출력
	/*for (int num4 = 0; num4 <= 100; num4++)
	{
		cout << num4 << endl;
	}*/

	//배열 순서대로 출력
	/*int count[3] = { 2018, 2019, 2020 };

	for (int num5= 0; num5 < sizeof(count) / sizeof(*count); num5++)
	{
		cout << num5 + 1 << "번째 번호는" << count[num5] << "입니다." << endl;
	}*/

	//for문 종료
	/*bool loop = true;
	char input;
	for (; loop; )
	{
		cin >> input;

		if (input == 'q')
			loop = false;
	}*/

	//while 문
	/*bool loop = true;
	char input;
	while (loop)
	{
		cin >> input;

		if (input == 'q')
			loop = false;
	}*/

	//별찍기 프로그램
	/*cout << "별찍기" << endl;
	cout << "라인 수를 입력하시오 : ";
	int num;
	cin >> num;
	cout << "정사각형" << endl;
	for (int j = 0; j < num; j++)
	{
		for (int i = 0; i < num; i++)
		{
			cout << '*';
		}
		cout <<  endl;
	}
	cout << "직각삼각형" << endl;
	for (int j = 1; j < num+1; ++j)
	{
		for (int i = 0; i < j; i++)
		{
			cout << '*';
		}
		cout <<  endl;
	}
	cout << "역직각삼각형" << endl;
	for (int j = num; j > 0; j--)
	{
		for (int k = 0; k < num - j; k++)
		{
			cout << ' ';
		}
		for (int i = 0; i < j; i++)
		{
			cout << '*';
		}
		cout << endl;
	}
	cout << "이등변삼각형" << endl;
	for (int j = 1; j < num+1; j++)
	{
		for (int k = 0; k < num - j; k++)
		{
			cout << ' ';
		}
		for (int i = 0; i < j; i++)
		{
			cout << '*';
		}
		for (int l = 0; l < j - 1;l++)
		{
			cout << '*';
		}
		cout << endl;
	}*/

	//스왑
	/*int x = 10;
	int y = 20;
	swap(x, y);

	cout << x << endl;
	cout << y << endl;*/

	//countNum(5);

	//팩토리얼
	/*factorial(5);

	int num = 1;

	for (int i = 5; i >= 1; i--)
	{
		num *= i;
	}
	cout << num << endl;

	int i = 1;
	num = 1;
	while (i <= 5)
	{
		num *= i;
		i++;
	}
	cout << num << endl;*/

	//피보나치
	/*fibonacci(1, 1);

	int num = 1;
	int i = 1;
	for (i; i < 10;)
	{
		int temp = num;
		num += i;
		i = temp;
		cout << "for문 피보나치는 " << num << endl;
	}
	num = 1;
	i = 1;
	while (i < 10)
	{
		int temp = num;
		num += i;
		i = temp;
		cout << "while문 피보나치는 " << num << endl;
	}*/

	//스태틱
	/*cout << "staticTest 함수 1번째호출 " << endl;
	staticTest();
	cout << "staticTest 함수 2번째호출 " << endl;
	staticTest();
	cout << "staticTest 함수 3번째호출 " << endl;
	staticTest();*/

	//ofstream
	/*ofstream fout;
	fout.open("file.txt");
	fout << 1 << ' '
		 << 2 << '\t'
		 << 3 << '\n'
		 << 4;*/

	//ifstream
	/*ifstream fin;
	fin.open("file.txt");
	int number[4];
	fin >> number[0]
	>> number[1]
	>> number[2]
	>> number[3];

	for (int i = 0; i < 4; i++)
	{
		cout << number[i] << endl;
	}*/

	//구조체 정의
	/*Student stu;
	stu.age = 20;
	stu.name = "박정호";
	stu.number = 20060526;

	cout << stu.age << endl;
	cout << stu.name << endl;
	cout << stu.number << endl;*/

	//구조체 for문
	/*Student stu[100];

	for (int i = 0; i < (sizeof(stu) / sizeof(*stu));i++)
	{
		stu[i].name = "박정호";
		stu[i].age = 20;
		stu[i].number = i + 20200100;

		cout << stu[i].name << endl;
		cout << stu[i].age << endl;
		cout << stu[i].number << endl;
		cout << endl;
	}*/

	//다중배열 합, 곱
	/*srand(time(0));
	int board[2][2] =
	{
		{rand() % 10, rand() % 10},
		{rand() % 10, rand() % 10}
	};

	for (int i = 0; i < sizeof(board) / sizeof(*board); i++)
	{
		int sum = 0;
		int mul = 1;
		for (int j = 0; j < sizeof(board[i]) / sizeof(*board[i]); j++)
		{
			cout << i << "번 배열의 " << j << "번째 수는 " << board[i][j] << endl;
			sum += board[i][j];
			mul *= board[i][j];

		}
		cout << "덧셈 결과는 " << sum << endl;
		cout << "곱셈 결과는 " << mul << endl;
	}*/

	//포인터
	/*int arr[3] = { 1,2,3 };
	int* x_ptr;
	x_ptr = &arr[0];
	x_ptr++;

	cout << *x_ptr << endl;*/

	//더블 포인터
	/*int x = 10;
	int* x_ptr = &x;
	int** x_ptr_ptr = &x_ptr;

	cout << x << endl;
	cout << *x_ptr << endl;
	cout << **x_ptr_ptr << endl;*/

	//포인터로 값 수정
	/*int x = 10;
	int temp = 20;
	int* x_ptr = &x;

	*x_ptr += temp;

	cout << x << endl;
	cout << *x_ptr << endl;*/

	//배열 포인터
	/*int gradeArr[2][5] =
	{
		{ 1,3,5,7,9 },
		{ 2,4,6,8,10 }
	};

	cout << *(gradeArr[0]) << endl;*/

	//포인터 스왑
	/*int x = 10;
	int y = 20;
	cout << "x의 값은 " << x << endl;
	cout << "y의 값은 " << y << endl;
	int* xp = &x;
	int* yp = &y;
	pswap(xp, yp);
	cout << "바뀐 x의 값은 " << x << endl;
	cout << "바뀐 y의 값은 " << y << endl;
	*/

	//배열값추가
	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	addarray(arr, 10);*/

	//동적할당
	/*int sn;
	cout << "배열 개수를 입력하시오. ";
	cin >> sn;
	cout << endl;
	Student* stuArr = new Student[sn];
	for (int i = 0; i < sn;i++)
	{
		string name;
		int age;
		int num;

		cout << "이름을 입력하시오. ";
		cin >> name;
		cout << "나이를 입력하시오. ";
		cin >> age;
		cout << "번호를 입력하시오. ";
		cin >> num;

		stuArr[i].name = name;
		stuArr[i].age = age;
		stuArr[i].number = num;

		cout << stuArr[i].name << endl;
		cout << stuArr[i].age << endl;
		cout << stuArr[i].number << endl;
	}
	delete[] stuArr;*/

	//달팽이 배열
	/*int number;
	while (true)
	{
		cout << "1부터 30까지 중 수 입력" << endl;
		cin >> number;

		if ((number < 1) | (number > 30))
		{
			cout << "Error" << endl;
		}
		else
		{
			break;
		}
		
	}
	Array(number);*/

	//순차탐색
	/*int arr[5] = {3, 6, 2, 9, 8};
	int sm;
	cin >> sm;
	for (int i = 0; i < sizeof(arr) / sizeof(*arr); i++)
		{
		if (sm == arr[i])
			{
			cout << "목표 탐색 완료 : " << arr[i] << endl;
			}
		}*/

	//이진탐색
	/*int num;
	cin >> num;

	
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int low = 0;
	int high = sizeof(arr) / sizeof(*arr) - 1;
	while (low <= high) {
		int mid = (low + high) / 2;
		if (arr[mid] == num)
		{
			cout << "목표 탐색 완료 : " << arr[mid] << endl;
			break;
		}
		else if (arr[mid] < num)
		{
			low = mid + 1;
		}
		else if (arr[mid] > num)
		{
			high = mid - 1;
		}
	}*/
	
	//클래스 생성
	/*Car myCar;
	Car yourCar;

	myCar.color = "Red";
	myCar.model = "Sedan";
	myCar.manufacturer = "hyundai";

	yourCar.color = "blue";
	yourCar.model = "abante";
	yourCar.manufacturer = "toyota";

	myCar.info();

	yourCar.info();*/

	//클래스 생성자 소멸자
	/*Student student1("john", 20, 3.5);
	student1.study();*/

	//클래스 멤버 초기화 리스트
	/*Person p("Alice", 25);
	p.print();
	return 0;*/

	//클래스 객체 생성
	/*Student* student1 = new Student("John", 20, 3.5);
	delete student1;*/

	//클래스 this 포인터
	/*Student stu;
	stu.setID(123);
	cout << "Student ID: " << stu.getID() << endl;*/

	//템플릿
	/*int a = 1, b = 2;

	double d1 = 2.2;
	double d2 = 3.3;

	string s1 = "sm";
	string s2 = "tm";

	cout << "int 합 : " << sum<int>(a, b) << endl;
	cout << "double 합 : " << sum<double>(d1, d2) << endl;
	cout << "string 합 : " << sum<string>(s1, s2) << endl;*/

	//함수 중복
	/*int a = sum(3, 4, 5);
	double b = sum(7.48, 2.97);
	int c = sum(4, 20);

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;*/

	//제네릭클래스
	/*Doughnut<int> exampleDoughnutA(6);
	Doughnut<double> exampleDoughnutB(6.5);

	cout << exampleDoughnutA.getArea() << " square cm" << endl;
	cout << exampleDoughnutB.getArea() << " square cm" << endl;*/
	
	//클래스 상속
	/*Dog dog;
	dog.eat();
	dog.bark();*/

	return 0;
}

