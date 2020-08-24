#include <iostream>
using namespace std;
class student
{
	char name[20]; 
	int IDX;
public : 
	student()
	{
		cout << "Empty\n";
		strcpy_s(name, "No name");
		IDX = 1;
	}
	student(char n[], int id)
	{
		cout << "parameterize\n";
		strcpy_s(name , n);
		IDX = id;
	}
	void print(void)
	{
		cout << name << "\t" << IDX << endl;
	}
};
int main()
{
	student s1((char*)"Ali", 123), s2((char*)"Ahmed", 456), * p;
	student arr[3] = { s1,s2 };
	p = arr;
	int i = 0;
	(p+i)->print();
	i++;
	(p + i)->print();
	i++;
	(p + i)->print();
	/**************/
	//student s1((char*)"Ali", 123), s2((char*)"Ahmed", 456),*p;
	//student arr[3] = {s1,s2 };
	//p = arr;
	//for (int i = 0; i < 3; i++)
	//{
	//	//(p+i)->print();
	//	p++->print();
	//}
	/**********/
	/*student s1((char*)"Ali", 123), s2((char*)"Ahmed", 456);
	student arr[3] = { s1,s2};
	for (int i = 0; i < 3; i++)
	{
		arr[i].print();
	}*/
	/*******************/
	/*student s1((char*)"Ali", 123), s2((char*)"Ahmed", 456);
	student arr[3] = {student((char *)"adel", 1450)};
	for (int  i = 0; i < 3; i++)
	{
		arr[i].print();
	}*/
	/*******************/
	//int arr[5] = { 10 , 50 , 40 , 77 , 33 };
	//int* p;
	//p = arr;
	//for (size_t i = 0; i < 5; i++)
	//{
	//	cout << *(p++) << endl;
	//	//++p;
	//}
	/*int arr[5] = { 10 , 50 , 40 , 77 , 33 };
	int* p;
	p = arr;
	for (size_t i = 0; i < 5; i++)
	{
		cout << *(p+i) << endl;
	}*/
	/***********/
	//int arr[5] = { 10 , 50 , 40 , 77 , 33 };
	//int* p;
	//p = arr;
	//p += 2;
	//cout << *p<< endl;
	/***********/
	/*int arr[5] = { 10 , 50 , 40 , 77 , 33 };
	int* p;
	p = arr;
	cout << *(p+1) << endl;
	cout << *(p+3) << endl;*/
/*****/
	//int arr[5] = {10 , 50 , 40 , 77 , 33}; 
	//cout << *(arr+4)<< endl;
	//for (size_t i = 0; i < 5; i++)
	//{
	//	cout << *(arr+i) << endl;
	//}
}
