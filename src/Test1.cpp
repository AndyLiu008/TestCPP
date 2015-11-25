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
	cout << "!!!Hello World!!!ddd111222" << endl; // prints !!!Hello World!!!
	Sales_item a=Sales_item("haha",80.9);
	a.display();
	Sales_item *b=&a;
	b->display();
	Sales_item c;
	c.display();



}
