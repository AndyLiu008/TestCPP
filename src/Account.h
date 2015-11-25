/*
 * Account.h
 *
 *  Created on: 2015Äê11ÔÂ25ÈÕ
 *      Author: MBENBEN
 */

#ifndef ACCOUNT_H_
#define ACCOUNT_H_

#include <string>
class Account {
     public:
         // interface functions here
         void applyint() { amount += amount * interestRate; }
         static double rate() { return interestRate; }
         static void rate(double); // sets a new rate
         static double interestRate;

     private:
         std::string owner;
         double amount;
         static const int period = 32; // interest posted every 30 days
         static double initRate();
     };

#endif /* ACCOUNT_H_ */
