#include <iostream>
#include <windows.h>
using namespace std;


class lab1{

	public:
		int j;

		void method()  
		{
			cout << "Skolko let ?"<< endl;
			cin >> j;
			cout << "tebe " << j << " let"<< endl;
	    }

		void Text()
		{

			cout << "My name is Andrey" << endl;
		}


};


void main()
{
	lab1 first_Object;
	first_Object.method();


system("pause");
}