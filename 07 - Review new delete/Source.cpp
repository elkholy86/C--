# include <iostream>
# include <cstring>
using namespace std; 
class Crectangle {
	int* width, * height; 
public : 
	Crectangle(int, int); 
	~Crectangle();
	int area()
	{
		return (*width * *height);
	}
};
Crectangle::Crectangle(int a, int b)
{
	width = new int; 
	height = new int; 
	*width = a; 
	*height = b;
}
Crectangle::~Crectangle()
{
	delete width; 
	delete height;
}
int main()
{
	Crectangle rect(3, 4), rectb(5, 6);
	cout << "rectangle " << rect.area() << endl;
	cout << "Recto area " << rectb.area() << endl;
	/*******/
	//int* p1, * p2;
	//p1 = new int; 
	//*p1 = 10; 
	//cout << &p1 << endl;
	//cout << "Memory Location " << p1 << "\n";
	//cout << "Contains " << *p1 << endl;
	//p2 = new int; 
	//*p2 = 10;
	//cout << &p2 << endl; 
	//cout << "Memory Location" << p2 << '\n' << "Contains " << *p2 << endl;
	//delete p1; 
	//delete p2; 
	//******************
	//int* p;
	//p = new int; 
	//*p = 10; 
	//cout << *p << endl;
	//delete p;
	//p = new int; 
	//*p = 20; 
	//cout << *p << endl;
	//**********
	/*int var1 = 11; 
	int var2 = 22; 
	cout << &var1 << endl;
	cout << &var1 << endl;
	int* ptr;
	ptr = &var2;
	*ptr = 5000; 
	var2 = 50;
	cout << ptr << endl;
	cout << var2 << endl;*/
};