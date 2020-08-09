using namespace std;
#include <iostream>
#include <cstring>
#include <string>
#include<cstdlib>
struct Exam 
{
	float first;
	float second;
	float final;
	void f() { cout << "Struct\n "; }
};
class subject
{
	char name[10];
	Exam exam;
public :
		subject()
	{
			strcpy_s(name, "No name");
			exam = {0,0,0};
	}
		subject(char n[] , float fa , float s , float fi)
		{
			exam.f();
			strcpy_s(name, n);
			exam = {fa ,s , fi};

		}
		float total()
		{
			return exam.first + exam.second + exam.final;
		}
		void print()
		{
			cout << "The subject = " << name << endl
				<< "First exam = " << exam.first << endl
				<< "second exam = " << exam.second << endl
				<< "Final exam = " << exam.final << endl
				<< "The total is = " << total() << endl;
		}
};
int main()
{
	subject e((char *)"OOP" , 25 , 24 , 49);
	e.print();
}
























/*
struct Distance
{
	int feet; 
	int inches; 
};

  Distance add_distance(Distance d1, Distance d2)
{
	  Distance result; 
	  result.feet = d1.feet + d2.feet;
	  result.inches = d1.inches + d2.inches;
	  return result;
}
int main()
{
	Distance x, y, z;
	cout << "Enter feet value \n";
	cin >> x.feet >> y.feet;
	cout << "Enter inches value \n";
	cin >> x.inches >> y.inches;
	z = add_distance(x, y);
	cout << "z.feet = " << z.feet << "z.inches = " << z.inches << endl;
}
*/