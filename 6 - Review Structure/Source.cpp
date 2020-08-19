#include <iostream>
#include <cstring>
#include <string>
#include <cstdlib>
using namespace std; 
//struct car
//{
//	string name;
//	string color;
//	int maxspeed;
//	int model;
//}g, k;
//*******************************
//struct Distance
//{
//	int feet; 
//	float inches;
//};
//Distance add_distance(Distance d1, Distance d2)
//{
//	Distance result; 
//	result.feet = d1.feet + d2.feet;
//	result.inches = d1.inches + d2.inches;
//	return result;
//}
//**************************
struct exam 
{
	float first; 
	float second; 
	float final; 
};
class subject
{
	char name[10]; 
	exam Exam;
public :
	subject()
	{
		strcpy_s(name , "No name");
		Exam = {0,0,0};
	}
	subject(char n[], float fa, float s, float fi)
	{
		strcpy_s(name, n);
		Exam = { fa ,s , fi };
	}
	float total()
	{
		return Exam.first + Exam.second + Exam.final;
	}
	void print()
	{
		cout << "The subject = " << name << endl
			<< "First Exam = " << Exam.first << endl
			<< "Second Exam = " << Exam.second << endl
			<< "Final Exam = " << Exam.final << endl
			<< "The Total is = " << total() << endl;
	}

};
int main()
{

	subject e((char *)"OOP" , 25 , 24 , 49);
	e.print();
//*******************************
	//Distance x, y, z; 
	//cout << "Enter feet value\n";
	//cin >> x.feet >> y.feet;
	//cout << "Enter inches value\n"; 
	//cin >> x.inches >> y.inches;
	//z = add_distance(x, y);
	//cout << "Z.feet = " << z.feet << "z.inches = " << z.inches << endl;
	//***********************************
	/*car g = { "kia", "red" , 250 , 96 }, k;
	if (g.model > k.model)
		cout << "g is less than k\n";*/
	//********************
	/*k = {"aa" , "black" , 300 , 97};
	g = { "Kia" , "red" , 250 , 96 };
	cout << g.maxspeed << endl;*/
	//*************************************
	//car g = {"Kia" , "red" , 250 , 96};
	//cout << g.maxspeed << endl;
	//******************************
	/*int arr[5] = {10 , 20 , 30 , 40 , 50};
	cout << arr[0] << endl;*/
}

