/*
 * This file contains code from "C++ Primer, Fourth Edition", by Stanley B.
 * Lippman, Jose Lajoie, and Barbara E. Moo, and is covered under the
 * copyright and warranty notices given in that book:
 * 
 * "Copyright (c) 2005 by Objectwrite, Inc., Jose Lajoie, and Barbara E. Moo."
 * 
 * 
 * "The authors and publisher have taken care in the preparation of this book,
 * but make no expressed or implied warranty of any kind and assume no
 * responsibility for errors or omissions. No liability is assumed for
 * incidental or consequential damages in connection with or arising out of the
 * use of the information or programs contained herein."
 * 
 * Permission is granted for this code to be used for educational purposes in
 * association with the book, given proper citation if and when posted or
 * reproduced.Any commercial use of this code requires the explicit written
 * permission of the publisher, Addison-Wesley Professional, a division of
 * Pearson Education, Inc. Send your request for permission, stating clearly
 * what code you would like to use, and in what specific way, to the following
 * address: 
 * 
 * 	Pearson Education, Inc.
 * 	Rights and Contracts Department
 * 	75 Arlington Street, Suite 300
 * 	Boston, MA 02216
 * 	Fax: (617) 848-7047
*/ 

#ifndef SALESITEM_H
#define SALESITEM_H

// Definition of Sales_item class and related functions goes here


#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;
class Sales_item {
public:
         // operations on Sales_itemobjects
         // default constructor needed to initialize members of built-in type
         Sales_item(): units_sold(0), revenue(0.0) { };
         Sales_item(string str,double d):units_sold(8){isbn=str;revenue=d;};
          void display();
     private:
         std::string isbn;
         unsigned units_sold;
         double revenue;
};


#endif
