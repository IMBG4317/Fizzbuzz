//C++ Fizz Buzz Assingnment 
//Write a program that prints the numbers from 1 to 100
//if multiples of three, prints "Fizz" instead of the number, and for the multiples of five it prints "Buzz".
//and if its divisible by both, prints "FizzBuzz"
#include<iostream>
using namespace std;

int main() {
for (int i = 1 ; i < 101; i++) //print numbers from 1 to 100
{
    //checks to see if both divisable by 3 and 5
    if (i % 3 == 0 && i % 5 == 0)
    {
        cout << "Fizz \n" ;
        cout << "BUzz" << endl;    
    }
    else if (i % 3 == 0) //checks to see if divisible by 3
    {
        cout << "Fizz" << endl;
    }
    else if (i % 5 == 0) // checks to see if divisible by 5
    {
        cout << "Buzz" << endl;
    
    }
    else  //prints out rest of numbers from 1 to 100
    cout << i << endl;
}

}