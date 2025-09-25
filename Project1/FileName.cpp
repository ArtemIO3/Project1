#include<iostream>
using namespace std;

class Student
{
	char *name;
	char *surname;
	int age;
public:
	Student(const char *n, const char *sur, int a)
	{
		surname = new char[strlen(sur) + 1];
		strcpy_s(surname, strlen(sur)+1,sur);
		name = new char[strlen(n) + 1];
		strcpy_s(name, strlen(n) + 1, n);
		age = a;
	}
	void Print()
	{
		cout << "Name:" << name << "\tAge:" << age <<"\t Surname:" << surname  << endl;
	}
	~Student() // destructor 
	{
		cout << "destructor\n";
		delete[]surname;
		delete[] name; 
	}
};
int main()
{
	Student obj1("Artem","Iordan", 19);
	obj1.Print();
}
