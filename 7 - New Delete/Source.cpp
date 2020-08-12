using namespace std;
#include <iostream>
#include <cstring>
class Crectangle
{
	int* width, * height;
public:
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
	cout << "rectangle rect = " << rect.area() << endl;
	cout << "rectangle rectb = " << rectb.area() << endl;















	/*int* p1, * p2;
	p1 = new int; 
	*p1 = 10;
	cout << &p1 << endl;
	cout << "Memory location = " << p1 << "\n";
	cout << "Contains = " << *p1 << "\n";
	p2 = new int;
	*p2 = 10;
	cout << &p2 << endl;
	cout << "Memory location = " << p2 ;
	cout << " Contains = " << *p2 << "\n";
	delete p1;
	delete p2;*/

}