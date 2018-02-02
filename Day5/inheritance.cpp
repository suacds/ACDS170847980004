/*
Basic Hybrid Inheritance Sample 
*/

#include <iostream>
using namespace std;
 
// base class 
class Vehicle 
{
  public:
    Vehicle()
    {
      cout << "This is a Vehicle" << endl;
    }
};
 
//base class
class Fare
{
    public:
    Fare()
    {
        cout<<"Fare of Vehicle\n";
    }
};
 
// first sub class 
class Car: public Vehicle
{
 
};
 
// second sub class
class Bus: public Vehicle, public Fare
{
     
};
 
// main function
int main()
{   
    // creating object of sub class will
    // invoke the constructor of base class
    Bus obj2;
    return 0;
}


/*
OUTPUT

student@student-OptiPlex-3020:~/Desktop/ACDS170847980004/Day5$ g++ inheritance1.cpp
student@student-OptiPlex-3020:~/Desktop/ACDS170847980004/Day5$ ./a.outMy profession is: Teacher
My age is: 23
I can walk.
I can talk.
I can teach Maths.
My profession is: Footballer
My age is: 19
I can walk.
I can talk.
I can play Football.
student@student-OptiPlex-3020:~/Desktop/ACDS170847980004/Day5$ 

*/
