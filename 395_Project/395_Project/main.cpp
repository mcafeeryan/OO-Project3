#include "myCollection.h"
#include "myVector.h"
#include <list>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	//Our driver code goes here:
	MyVector<int> mv (4,100);
	cout << mv[0] << endl;
	//TODO: some stuff with iterators

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