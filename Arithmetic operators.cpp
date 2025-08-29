#include<iostream>
using namespace std;

//arithmetic oprater is :+,-,*,/,%
int main(){
   int a=15,b=8;

   cout << "sum="<< (a+b) << endl;  // 23
   cout << "substraction="<< (a-b) << endl; //7
   cout << "multiplication="<< (a*b) << endl;  // 120
   cout << "division="<< (a/b) << endl;  // 1
   cout << "modulo="<< (a%b) << endl;  // 7

   // in division opreater  division of two different data type -> answer is of big data type ex: float/int -> float ; double/ int -> doublle

   int c=5;
   double d=9.07;
   cout << (c/d) << endl;//0.551268

   // either you use type casting in division

   cout << 5/(double)2 << endl; // 2.5
   return 0;
}