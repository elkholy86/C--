#include <iostream>
#include <string>
using namespace std;
class student {
	 static int count;
	char name[20];
	int first, second, final, total, ID;
public : 
	static void print_count()
	{
		cout << "Student contructed: " << count << endl;
	}
	student()
	{
		strcpy_s(name, "No name");
		ID = 0;
		first = second = final = 0;
		count++;
		print_count();
	}
};
int student::count = 0; 
int main()
{
	student::print_count();
	cout <<"\nconstruct 2 objects\n";
	student s1, s2;
	cout << "\nconstruct 3 objects\n";
	student st[3];
	/*cout<<"\nconstuct 2 Objective\n";
	student s1, s2; 
	cout << "\nconstruct 3 Objective\n";
	student st[3];*/
	//************- 1 - **********************
	//void f()
	//{
	//	static int x = 0; 
	//	x++;
	//	cout << x << endl; 
	//}
	//int main()
	//{
	//	f();
	//	f();
	//	f();
	//	f();
	//}
}