#include <iostream>
#include <string>
#include <ctime>
#include <fstream>

using namespace std;

//템플릿
template <typename T>
T sum(T a, T b) {
	return a + b;
}

//학생 구조체
/*struct Student
{
	string name;
	int age;
	double grade;
};*/
//학생클래스
/*class Student
{
	string name;
	int age;
	double grade;
public:

	Student(string n, int a, double g, int i) : name(n), age(a), grade(g), id(i) {
		cout << "a Student " << name << " is created" << endl;
	}

	~Student() {
		cout << "a Student " << name << " is destroyed" << endl;
	}

	void study() {
		grade += 0.1;
	}

};*/

class Student
{
	int id;

public:
	void setID(int id) {
		this->id = id;
	}
	int getID() {
		return this->id;
	}
};

//클래스 상속
class Animal {
public:
	void eat() {
		cout << "Eating..." << endl;
	}
};

class Dog : public Animal {
public:
	void bark() {
		cout << "Barking..." << endl;
	}
};

//노드
struct Node
{

	int data;
	struct Node* link;
};

//클래스
class Car {
public:
	string color;
	string model;
	string manufacturer;

	void drive() {
		cout << "차 운전 실행" << endl;
	}

	void stop() {
		cout << "차 멈춤" << endl;
	}

	void info() {
		cout << "color is " << this->color << endl;
		cout << "model is " << this->model << endl;
		cout << "manufacturer is " << this->manufacturer << endl;
	}
};

class Person {
	string name;
	int age;

public:
	// 생성자에서 멤버 초기화 리스트 사용
	Person(string n, int a) : name(n), age(a) {}

	void print() {
		cout << "이름: " << name << ", 나이: " << age << endl;
	}
};

//스왑
void swap(int& x, int& y) {
	int temp = x;
	x = y;
	y = temp;
	return;
}

//포인트 스왑
void pswap(int* xp, int* yp) {
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
	return;
}

//숫자 카운트
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

//팩토리얼
void factorial(int num, int n = 1)
{
	if (num == 1)
	{
		cout << "팩토리얼은 " << n << endl;
		return;
	}
	else
	{
		n *= num;
		factorial(num - 1, n);
	}
}

//피보나치
void fibonacci(int x, int y)
{
	if (x < 10)
	{
		x += y;
		cout << "피보나치 수는 " << x << endl;
		fibonacci(y, x);
		return;
	}
}

//스태틱
void staticTest()
{
	int local_count = 0;
	static int static_count = 0;
	local_count++;
	static_count++;

	cout << "local_count:" << local_count << endl;
	cout << "static_count" << static_count << endl;
}

//배열 값 추가
void addarray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i]++;
		cout << arr[i] << endl;
	}
}

//달팽이 배열
void Array(int numb)
{

	cout << endl;
	cout << numb << "열의 달팽이 생성" << endl;
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

//함수 중복
int sum(int a, int b, int c)
{
	return a + b + c;
}

double sum(double a, double b)
{
	return a + b;
}

int sum(int a, int b)
{
	return a + b;
}

//제네릭 클래스
template <typename Radius>
class Doughnut {
private:
	Radius radius;
public:
	Doughnut(Radius radius = 6) { this->radius = radius; };
	~Doughnut() { cout << "Someone ate a doughnut which size was " << this->radius << " cm long." << endl; }
	double getArea();
};

template <typename Radius>
double Doughnut<Radius>::getArea() {
	double area = this->radius * this->radius * 3.1415;
	return area;
}
