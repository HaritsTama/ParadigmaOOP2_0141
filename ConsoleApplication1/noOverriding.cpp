#include <iostream>
using namespace std;

class baseClass
{
public :
	virtual void perkenalan()
	{
		cout << "Halo saya function dari base class";
	}
};
class derivedClass : public baseClass
{
	void perkenalan()
	{
		cout << "Halo saya function dari derived class";
	}
};