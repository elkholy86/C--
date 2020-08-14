using namespace std; 
#include <iostream>
using namespace std;
class student 
{
	char name[20];
	int ID;
public:
	student()
	{
		cout << "empty\n";
		strcpy_s(name, "No name");
		ID = 0;
	}
	student(char n[], int id) // constuctor overloading 
	{
		cout << "parameterize\n";
		strcpy_s(name, n);
		ID = id;
	}
	void print(void)
	{
		cout << name << "\t" << ID << endl;
	}
};
int main() 
{
	student s1((char *)"Ali", 123), s2((char*)"ahmed", 456), *p;
	student arr[3] = {s1,s2};
	p = arr;
	int i = 0; 
	(p + i)->print();
	i++;
	(p + i)->print();
	i++;
	(p + i)->print();

	//student arr[3] = {student ((char *)"Adel" ,11111)};
//	for (size_t i = 0; i < 3; i++)
//	{
////		arr[i].print();
//		p++->print();
//	}
////////////////////////////////////////////////
	//int arr[5] = { 10 , 50 , 40 , 77 , 33 };
	//int* p;
	//p = arr;
	////p += 2;
	//for (size_t i = 0; i < 5; i++)
	//{
	//	//cout << *(p+i) << endl;
	//	/*cout << *p << endl;
	//	++p;*/
	//	cout << *(p++) << endl;
	//}
	///////////////////////////////////////
	/*int arr[5] = {10 , 50 , 40 , 77 , 33};
	for (size_t i = 0; i < 5; i++)
	{
		cout << *(arr+i) << endl;	
	}*/
}