#include <iostream>
using namespace std;

int main()
{    // Reversing a Number

int number, ReversedNumber=0;
cout << "Number: ";
cin >> number;

 while (number != 0){
        ReversedNumber *= 10;
        int lastDigit = number % 10;
        ReversedNumber += lastDigit;
        number /= 10;
    

     
 }

   
   cout << "Reversed Number is " << ReversedNumber;

   return 0;


}