//#include "myCollection.h"
#include "myVector.h"
#include <list>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	//Our driver code goes here:
	int some_ints[] = {100, 101, 102, 103, 104 };
	MyVector<int> mv (some_ints, some_ints + 5);
	vector<int> v (some_ints, some_ints + 5);
	cout << "starting element: " << mv.starting_element() << endl;
	cout << "last element: " << mv.last_element() << endl;
	cout << "print all:" << endl;
	mv.show_all();
	cout << "value at 2: " << mv.value_at_position(2) << endl;
	cout << "debugging... : " << mv.value_at_position(10) << endl; //should this crash? Maybe...
	

	//Driver code that uses the C++ STL
	int myints[] = { 75,23,65,42,13 };
	list<int> myl1 (myints,myints+5);
	cout << "myl1 starts with:";
	list<int>::iterator it = myl1.begin();
	cout << ' ' << *it;

	char wait;
	cin >> wait;
	return 0;
}