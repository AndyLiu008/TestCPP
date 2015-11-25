/*
 * Screen.cpp
 *
 *  Created on: 2015年11月25日
 *      Author: 123
 */

#include "Screen.h"

char Screen::get(index ht,index wd)const{
	 index row = wd* width;    // compute the row location
	 return contents[row + ht]; // offset by c to fetch specified character
}

Screen& Screen::set(char ch){//返回一个引用
	contents[cursor] = ch;
	return *this;//*this代表一个对象，而this代表一个指针，也就是一个地址

}


Screen& Screen::move(index r, index c)
{
    index row = r * width; // row location
    cursor = row + c;
    return *this;
}



