//============================================================================
// Name        : Test1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Sales_item.h"
#include "Screen.h"
using namespace std;

int main() {
	cout << "!!!Hello World!!!ddd111" << endl; // prints !!!Hello World!!!
	Sales_item a=Sales_item("haha",80.9);
	a.display();

	Sales_item *b=&a;
	b->display();

	Sales_item c;
	c.display();
//////////////////////////////////////////
	Screen s(20,20);
	s.set('a');
	s.move(2,2);
	s.set('b');
	cout << s.move(0,0).get() <<"???"<< endl;
	cout << s.move(2,2).get() <<"???"<< endl;





}
