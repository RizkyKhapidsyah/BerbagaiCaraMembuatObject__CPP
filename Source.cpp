#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

class DenganConstructor
{
public:
	string data;
	
	DenganConstructor(const char* data) 
	{
		DenganConstructor::data = data;
	}

	void show()
	{
		cout << "Ini " << DenganConstructor::data << endl;
	}
};

class TanpaConstructor
{
public:
	string data;

	void show()
	{
		cout << "Ini " << TanpaConstructor::data << endl;
	}
};

int main()
{
	// PEMBUATAN OBJECT YANG MEMORINYA BERADA DI MEMORY STACK

	/*  Cara Membuat Object Tanpa Constructor */
	TanpaConstructor object1;
	object1.data = "Object 1";
	object1.show();

	/*  Cara Membuat Object Dengan Constructor - Cara 1 */
	DenganConstructor object2 = DenganConstructor("Object 2");
	object2.show();

	/*  Cara Membuat Object Dengan Constructor - Cara 2 */
	DenganConstructor object3("Object 3");
	object3.show();

	// PEMBUATAN OBJECT YANG MEMORINYA BERADA DI MEMORY HEAP
	DenganConstructor* object4 = new DenganConstructor("Object 4");
	(*object4).show(); //Dengan Cara Dereference

	DenganConstructor* object5 = new DenganConstructor("Object 5");
	object5->show(); //Menggunakan Arrow Operator, Mapping function atau attribut dari pointer
	cout << object5->data << endl;

	string object6 = object5->data;
	cout << object6 << endl;

	_getch();
	return 0;
}
