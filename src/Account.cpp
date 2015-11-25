/*
 * Account.cpp
 *
 *  Created on: 2015年11月25日
 *      Author: MBENBEN
 */

#include "Account.h"
  void Account::rate(double newRate)
     {
         interestRate = newRate;
     }


	double Account::interestRate=30.0;//static变量一般在cpp文件中初始化，
	//（由于只进行一次初始化）
