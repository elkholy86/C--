#include <iostream>
#include <cstring>
using namespace std; 
//enum days {sat =1, sun , mon , tue, wed , thur,fri};
//***********************************
string da[7] = {"sat", "sun" , "mon" , "tue", "wed" , "thur","fri" };
enum days {sat = 1, sun, mon, tue, wed, thur, fri};
class week
{
	days d [7];
public :
	void setday(days w[])
	{
		for (size_t i = 0; i < 7; i++)
		{
			d[i] = w[i];
		}
	}
	void p()
	{
		for (size_t i = 0; i < 7; i++)
		{
			cout << "The Number of day " << da[i] << " = " << d[i] << endl;

		}
	}

};
int main()
{
days d [7] = {sat , sun, mon, tue, wed, thur, fri };
week g; 
g.setday(d);
g.p();

	// *****************************
	//string d [7] = { "sat", "sun" , "mon" , "tue", "wed" , "thur","fri" };
	//days m[7] = { sat, sun , mon , tue, wed , thur,fri };
	//for (size_t i = 0; i < 7 ; i++)
	//{
	//	cout << m[i]<< "  -  " << d[i]<< endl;
	//}
}
