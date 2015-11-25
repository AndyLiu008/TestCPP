//============================================================================
// Name        : Test1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "IncludeAll.h"
using namespace std;

int main() {
	cout << "!!!Hello World!!!ddd11122" << endl; // prints !!!Hello World!!!
	Sales_item a=Sales_item("haha",80.9);
	a.display();

	Sales_item *b=&a;
	b->display();

	Sales_item c;//Sales_item c()错误，因为函数定义也是这样，Sales_item c("DD",4.0)正确
	c.display();
//////////////////////////////////////////
	Screen s(20,20);
	s.set('a');
	s.move(2,2);
	s.set('b');
	cout << s.move(0,0).get() <<"???"<< endl;
	cout << s.move(2,2).get() <<"???"<< endl;



///////////////////////////////////////////
	Account account;
	cout << account.rate()<<"???"<< endl;
	cout << Account::rate()<<"?ddd??"<< endl;
	cout <<"???2233"<< endl;






}
