/*
 * Screen.cpp
 *
 *  Created on: 2015��11��25��
 *      Author: 123
 */

#include "Screen.h"

char Screen::get(index ht,index wd)const{
	 index row = wd* width;    // compute the row location
	 return contents[row + ht]; // offset by c to fetch specified character
}

Screen& Screen::set(char ch){//����һ������
	contents[cursor] = ch;
	return *this;//*this����һ�����󣬶�this����һ��ָ�룬Ҳ����һ����ַ

}


Screen& Screen::move(index r, index c)
{
    index row = r * width; // row location
    cursor = row + c;
    return *this;
}



