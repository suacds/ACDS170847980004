/*
WAP in c++ for Performing Arithmatic operations using functions called in main it self
*/

#include <iostream>
using namespace std;

void showMenu ();
int getOption();
int getNumbers();
int addNumbers();
int divideNumbers();
int subtractNumbers();
int multiplyNumbers();
void displayResults();
 

void showMenu ()
{
cout<<" 1. ADDITION "<<endl;
cout<<" 2. DIVISION " <<endl;
cout<<" 3. SUBSTRACT " <<endl;
cout<<" 4. MULTIPLY " <<endl;
}

 

int getOption (int selection)
{
cin>>selection;
return selection;
}


void getNumbers(int& num1, int& num2)
{
cout<<"Enter two numbers: ";
cin>>num1 >>num2;
}

 
int addNumbers(int num1, int num2, int& sum)
{
sum=num1+num2;
return sum;
}

 
int divideNumbers(int num1, int num2, int& sum)
{
sum=num1/num2;
return sum;
}


int subtractNumbers(int num1, int num2, int& sum)
{
    sum=num1-num2;
    return sum;
}


int multiplyNumbers(int num1, int num2, int& sum)
{
    sum=num1 * num2;
    return sum;
}


void displayResults(int num1, int num2, int& sum)
{
    cout<<num1 << " + " <<num2 << " = " <<sum <<endl;
}

int main ()
{
int a=0;
int num1;
int num2;
int Result;
 
showMenu();
getOption(a);
getNumbers(num1, num2);
addNumbers(num1, num2, Result);
divideNumbers(num1, num2, Result);
subtractNumbers(num1, num2, Result);
multiplyNumbers(num1, num2, Result);
displayResults(num1, num2, Result);
}

/*
student@student-OptiPlex-3020:~/Desktop/170847980004$ g++ Arrithmatic.cpp
student@student-OptiPlex-3020:~/Desktop/170847980004$ ./a.out
 1. ADDITION 
 2. DIVISION 
 3. SUBSTRACT 
 4. MULTIPLY 
4
Enter two numbers: 5
5
5 + 5 = 25
student@student-OptiPlex-3020:~/Desktop/170847980004$ 

*/


