#include <iostream>
#include <string>
#include <ctime>
#include <fstream>

using namespace std;

//�л� ����ü
struct Student
{
	string name;
	int number;
	int age;
};

//���
struct Node
{
	
	int data;
	struct Node* link;
};

//Ŭ����
class Car {
public:
	string color;
	string model;
	string manufacturer;

	void drive() {
		cout << "�� ���� ����" << endl;
	}

	void stop() {
		cout << "�� ����" << endl;
	}
};

//����
void swap(int& x, int& y) {
	int temp = x;
	x = y;
	y = temp;
	return;
}

//����Ʈ ����
void pswap(int* xp, int* yp) {
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
	return;
}

//���� ī��Ʈ
void countNum(int num)
{
	if (num == 1) {
		cout << "num is " << num << endl;
		return;
	}
	else {
		cout << "num is " << num << endl;
		countNum(num - 1);
	}
}

//���丮��
void factorial(int num, int n = 1)
{
	if (num == 1)
	{
		cout << "���丮���� " << n << endl;
		return;
	}
	else
	{
		n *= num;
		factorial(num - 1, n);
	}
}

//�Ǻ���ġ
void fibonacci(int x, int y)
{
	if (x < 10)
	{
		x += y;
		cout << "�Ǻ���ġ ���� " << x << endl;
		fibonacci(y, x);
		return;
	}
}

//����ƽ
void staticTest()
{
	int local_count = 0;
	static int static_count = 0;
	local_count++;
	static_count++;

	cout << "local_count:" << local_count << endl;
	cout << "static_count" << static_count << endl;
}

//�迭 �� �߰�
void addarray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i]++;
		cout << arr[i] << endl;
	}
}

//������ �迭
void Array(int numb)
{

	cout << endl;
	cout << numb << "���� ������ ����" << endl;
	cout << endl;

	int** arr = new int* [numb];

	for (int i = 0; i < numb; i++)
	{
		arr[i] = new int[numb];
	}

	int n = numb;

	int num = 1;
	int x, y;

	for (x = 0; x < (n / 2) + 1; x++)
	{
		for (y = x; y < n - x; y++)
		{
			arr[x][y] = num++;
		}
		for (y = x + 1; y < n - x; y++)
		{
			arr[y][n - x - 1] = num++;
		}
		for (y = n - x - 2; y >= x; y--)
		{
			arr[n - x - 1][y] = num++;
		}
		for (y = n - x - 2; y >= x + 1; y--)
		{
			arr[y][x] = num++;
		}
	}

	for (x = 0; x < n; x++)
	{
		for (y = 0; y < n; y++)
		{
			cout << arr[x][y] << " ";
		}
		cout << endl;
	}
}

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
	cout << "�ٲ� y�� ���� " << y << endl;*/

	//�迭 �� �߰�
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

	myCar.color = "Red";
	myCar.model = "Sedan";
	myCar.manufacturer = "hyundai";

	myCar.drive();
	myCar.stop();*/

	

	return 0;
}