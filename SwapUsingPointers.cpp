/* 3. Write a program in C++ to swap values of two variables using pointers. */

#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
	int *temp,i;
	temp=&i;
  	*temp=*a;
    	*a=*b;
    	*b=*temp;
}

int main()
{
	int i,j;
	cout<<"\n\n\t Enter value for i and j  \t :";
	cin>>i>>j;
        cout<<"\t Before swapping I = "<<i<<" J = "<<j<<endl;
        swap(&i,&j);
        cout<<"\t After swapping I = "<<i<<" J = "<<j<<endl;
	return 0;
}



/*
Output :

student@student-OptiPlex-3020:~/Downloads/ACDS170847980004/Day4$ g++ SwapUsingPointers.cpp
student@student-OptiPlex-3020:~/Downloads/ACDS170847980004/Day4$ ./a.out

	 Enter value for i and j  	 :5
6
	 Before swapping I = 5 J = 6
	 After swapping I = 6 J = 5
student@student-OptiPlex-3020:~/Downloads/ACDS170847980004/Day4$ 

*/

