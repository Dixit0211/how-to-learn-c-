#include<iostream>
using namespace std;
//converting data from one datatype to another
int main(){
    
    // this two is example of conversion(implicit)  in this small->big ex:char(1)->int(4)
    char grade ='A';//95/
    int value = grade;
    cout << value << endl;

    char grade1 ='a';//97
    int value1 = grade1;
    cout << value1 << endl;

    //casting(Explicit) is use for big data type transfer intoin small data type, EX: double(8)->int(4)

    double price = 100.99;
    int newprice = (int)price;  // 100.99 -> 100
    cout << newprice << endl;
    return 0;
}