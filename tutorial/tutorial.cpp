#include "tutorial.h"

int main()
{
	//¦Ȧ�� ����
	/*int num1;
	cin >> num1;

	if (num1 % 2 == 0)
	{
		cout << "¦��" << endl;
	}
	else
	{
		cout << "Ȧ��" << endl;
	}*/

	//���� ũ�� ����
	/*int num2;
	cout << "���ڸ� �Է��Ͻÿ�: ";
	cin >> num2;

	if (num2 < 10)
	{
		cout << "10���� ����" << endl;
	}
	else if (num2 < 20)
	{
		cout << "20���� ����" << endl;
	}
	else if (num2 < 30)
	{
		cout << "30���� ����" << endl;
	}
	else
	{
		cout << "30�̻�" << endl;
	}*/

	//switch ���ǹ�
	/*int num3;
	cout << "���ڸ� �Է��Ͻÿ�: ";
	cin >> num3;

	switch (num3)
	{
	case 1:
		cout << "1�Դϴ�." << endl;
		break;
	case 2:
		cout << "2�Դϴ�." << endl;
		break;
	case 3:
		cout << "3�Դϴ�." << endl;
		break;
	case 4:
		cout << "4�Դϴ�." << endl;
		break;

	}*/

	//0���� 100���� ���� ���
	/*for (int num4 = 0; num4 <= 100; num4++)
	{
		cout << num4 << endl;
	}*/

	//�迭 ������� ���
	/*int count[3] = { 2018, 2019, 2020 };

	for (int num5= 0; num5 < sizeof(count) / sizeof(*count); num5++)
	{
		cout << num5 + 1 << "��° ��ȣ��" << count[num5] << "�Դϴ�." << endl;
	}*/

	//for�� ����
	/*bool loop = true;
	char input;
	for (; loop; )
	{
		cin >> input;

		if (input == 'q')
			loop = false;
	}*/

	//while ��
	/*bool loop = true;
	char input;
	while (loop)
	{
		cin >> input;

		if (input == 'q')
			loop = false;
	}*/

	//����� ���α׷�
	/*cout << "�����" << endl;
	cout << "���� ���� �Է��Ͻÿ� : ";
	int num;
	cin >> num;
	cout << "���簢��" << endl;
	for (int j = 0; j < num; j++)
	{
		for (int i = 0; i < num; i++)
		{
			cout << '*';
		}
		cout <<  endl;
	}
	cout << "�����ﰢ��" << endl;
	for (int j = 1; j < num+1; ++j)
	{
		for (int i = 0; i < j; i++)
		{
			cout << '*';
		}
		cout <<  endl;
	}
	cout << "�������ﰢ��" << endl;
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
	cout << "�̵�ﰢ��" << endl;
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

	//����
	/*int x = 10;
	int y = 20;
	swap(x, y);

	cout << x << endl;
	cout << y << endl;*/

	//countNum(5);

	//���丮��
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

	//�Ǻ���ġ
	/*fibonacci(1, 1);

	int num = 1;
	int i = 1;
	for (i; i < 10;)
	{
		int temp = num;
		num += i;
		i = temp;
		cout << "for�� �Ǻ���ġ�� " << num << endl;
	}
	num = 1;
	i = 1;
	while (i < 10)
	{
		int temp = num;
		num += i;
		i = temp;
		cout << "while�� �Ǻ���ġ�� " << num << endl;
	}*/

	//����ƽ
	/*cout << "staticTest �Լ� 1��°ȣ�� " << endl;
	staticTest();
	cout << "staticTest �Լ� 2��°ȣ�� " << endl;
	staticTest();
	cout << "staticTest �Լ� 3��°ȣ�� " << endl;
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

	//����ü ����
	/*Student stu;
	stu.age = 20;
	stu.name = "����ȣ";
	stu.number = 20060526;

	cout << stu.age << endl;
	cout << stu.name << endl;
	cout << stu.number << endl;*/

	//����ü for��
	/*Student stu[100];

	for (int i = 0; i < (sizeof(stu) / sizeof(*stu));i++)
	{
		stu[i].name = "����ȣ";
		stu[i].age = 20;
		stu[i].number = i + 20200100;

		cout << stu[i].name << endl;
		cout << stu[i].age << endl;
		cout << stu[i].number << endl;
		cout << endl;
	}*/

	//���߹迭 ��, ��
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
			cout << i << "�� �迭�� " << j << "��° ���� " << board[i][j] << endl;
			sum += board[i][j];
			mul *= board[i][j];

		}
		cout << "���� ����� " << sum << endl;
		cout << "���� ����� " << mul << endl;
	}*/

	//������
	/*int arr[3] = { 1,2,3 };
	int* x_ptr;
	x_ptr = &arr[0];
	x_ptr++;

	cout << *x_ptr << endl;*/

	//���� ������
	/*int x = 10;
	int* x_ptr = &x;
	int** x_ptr_ptr = &x_ptr;

	cout << x << endl;
	cout << *x_ptr << endl;
	cout << **x_ptr_ptr << endl;*/

	//�����ͷ� �� ����
	/*int x = 10;
	int temp = 20;
	int* x_ptr = &x;

	*x_ptr += temp;

	cout << x << endl;
	cout << *x_ptr << endl;*/

	//�迭 ������
	/*int gradeArr[2][5] =
	{
		{ 1,3,5,7,9 },
		{ 2,4,6,8,10 }
	};

	cout << *(gradeArr[0]) << endl;*/

	//������ ����
	/*int x = 10;
	int y = 20;
	cout << "x�� ���� " << x << endl;
	cout << "y�� ���� " << y << endl;
	int* xp = &x;
	int* yp = &y;
	pswap(xp, yp);
	cout << "�ٲ� x�� ���� " << x << endl;
	cout << "�ٲ� y�� ���� " << y << endl;
	*/

	//�迭���߰�
	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	addarray(arr, 10);*/

	//�����Ҵ�
	/*int sn;
	cout << "�迭 ������ �Է��Ͻÿ�. ";
	cin >> sn;
	cout << endl;
	Student* stuArr = new Student[sn];
	for (int i = 0; i < sn;i++)
	{
		string name;
		int age;
		int num;

		cout << "�̸��� �Է��Ͻÿ�. ";
		cin >> name;
		cout << "���̸� �Է��Ͻÿ�. ";
		cin >> age;
		cout << "��ȣ�� �Է��Ͻÿ�. ";
		cin >> num;

		stuArr[i].name = name;
		stuArr[i].age = age;
		stuArr[i].number = num;

		cout << stuArr[i].name << endl;
		cout << stuArr[i].age << endl;
		cout << stuArr[i].number << endl;
	}
	delete[] stuArr;*/

	//������ �迭
	/*int number;
	while (true)
	{
		cout << "1���� 30���� �� �� �Է�" << endl;
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

	//����Ž��
	/*int arr[5] = {3, 6, 2, 9, 8};
	int sm;
	cin >> sm;
	for (int i = 0; i < sizeof(arr) / sizeof(*arr); i++)
		{
		if (sm == arr[i])
			{
			cout << "��ǥ Ž�� �Ϸ� : " << arr[i] << endl;
			}
		}*/

	//����Ž��
	/*int num;
	cin >> num;

	
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int low = 0;
	int high = sizeof(arr) / sizeof(*arr) - 1;
	while (low <= high) {
		int mid = (low + high) / 2;
		if (arr[mid] == num)
		{
			cout << "��ǥ Ž�� �Ϸ� : " << arr[mid] << endl;
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
	
	//Ŭ���� ����
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

	//Ŭ���� ������ �Ҹ���
	/*Student student1("john", 20, 3.5);
	student1.study();*/

	//Ŭ���� ��� �ʱ�ȭ ����Ʈ
	/*Person p("Alice", 25);
	p.print();
	return 0;*/

	//Ŭ���� ��ü ����
	/*Student* student1 = new Student("John", 20, 3.5);
	delete student1;*/

	//Ŭ���� this ������
	/*Student stu;
	stu.setID(123);
	cout << "Student ID: " << stu.getID() << endl;*/

	//���ø�
	/*int a = 1, b = 2;

	double d1 = 2.2;
	double d2 = 3.3;

	string s1 = "sm";
	string s2 = "tm";

	cout << "int �� : " << sum<int>(a, b) << endl;
	cout << "double �� : " << sum<double>(d1, d2) << endl;
	cout << "string �� : " << sum<string>(s1, s2) << endl;*/

	//�Լ� �ߺ�
	/*int a = sum(3, 4, 5);
	double b = sum(7.48, 2.97);
	int c = sum(4, 20);

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;*/

	//���׸�Ŭ����
	/*Doughnut<int> exampleDoughnutA(6);
	Doughnut<double> exampleDoughnutB(6.5);

	cout << exampleDoughnutA.getArea() << " square cm" << endl;
	cout << exampleDoughnutB.getArea() << " square cm" << endl;*/
	
	//Ŭ���� ���
	/*Dog dog;
	dog.eat();
	dog.bark();*/

	return 0;
}

