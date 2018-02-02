/* 2. Declare a structure to represent a complex number (a number having a real part and imaginary part). Write C++ functions to add, subtract, multiply and divide two complex numbers.*/

#include<iostream>
using namespace std;

struct complex
{
	int real,img;

} num1,num2;

void add(complex,complex);
void subtract(complex,complex);
void multiply(complex,complex);
void divide(complex,complex);

int main ()
{
	int x;
	cout<<"\n Enter first complax number (Real & Imaginary)  : \t ";
	cin>>num1.real>>num1.img;
	cout<<"\n Enter second complex number (Real & Imaginary) : \t ";
	cin>>num2.real>>num2.img;

	cout<<"\n\t Enter Your Choice ... \n\n\t 1. Addition \n\t 2. Substraction \n\t 3. Multiplication \n\t 4. Division \n\n \t\t";
	cin>>x;

	switch(x)
	{
		case 1: add(num1,num2);
		break;
		case 2: subtract(num1,num2);
		break;
		case 3: multiply(num1,num2);
		break;
		case 4: divide(num1,num2);
		break;
		default : cout<<"Invalid Choice !!! Please enter correct choice ... ";
	}
	
	return 0;	
}

void add(complex num1,complex num2)
{
	complex num3;

	num3.real=num1.real+num2.real;
	num3.img=num1.img+num2.img;
	cout<<"\n\n Result is : \t\t  "<<num3.real<<" + "<<num3.img<<" i \n";
	
}

void subtract(complex num1,complex num2)
{
	complex num3;

	num3.real=num1.real-num2.real;
	num3.img=num1.img-num2.img;
	cout<<"\n\n Result is : \t\t  "<<num3.real<<" + "<<num3.img<<" i \n";
	
}
void multiply(complex num1,complex num2)
{
	complex num3;

	num3.real=num1.real*num2.real;
	num3.img=num1.img*num2.img;
	cout<<"\n\n Result is : \t\t  "<<num3.real<<" + "<<num3.img<<" i \n";
	
}
void divide(complex num1,complex num2)
{
	complex num3;

	num3.real=num1.real/num2.real;
	num3.img=num1.img/num2.img;
	cout<<"\n\n Result is : \t\t  "<<num3.real<<" + "<<num3.img<<" i \n";
	
}
/*
Output :~
student@student-OptiPlex-3020:~/Downloads/ACDS170847980004/Day4$ ./a.out

 Enter first complax number (Real & Imaginary)  : 	 8
2

 Enter second complex number (Real & Imaginary) : 	 6
5

	 Enter Your Choice ... 

	 1. Addition 
	 2. Substraction 
	 3. Multiplication 
	 4. Division 

 		2


 Result is : 		  2 + -3 i 

 Enter first complax number (Real & Imaginary)  : 	 6
9

 Enter second complex number (Real & Imaginary) : 	 5
2

	 Enter Your Choice ... 

	 1. Addition 
	 2. Substraction 
	 3. Multiplication 
	 4. Division 

 		1


 Result is : 		  11 + 11 i 

 Enter first complax number (Real & Imaginary)  : 	 5
69

 Enter second complex number (Real & Imaginary) : 	 5
2

	 Enter Your Choice ... 

	 1. Addition 
	 2. Substraction 
	 3. Multiplication 
	 4. Division 

 		2


 Result is : 		  0 + 67 i 



 Enter first complax number (Real & Imaginary)  : 	 85
5

 Enter second complex number (Real & Imaginary) : 	 65
9

	 Enter Your Choice ... 

	 1. Addition 
	 2. Substraction 
	 3. Multiplication 
	 4. Division 

 		4


 Result is : 		  1 + 0 i 

student@student-OptiPlex-3020:~/Downloads/ACDS170847980004/Day4$ 

*/

