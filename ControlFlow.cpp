/* WAP for Control flow statements [IF, ELSE, WHILE, SWITCH]*/

#include <iostream>

using namespace std;
int main()
{
	
	int num;
	cout<<"Enter Any Number for control Flow Operations :";
	cin>>num;

	cout<<"\n----  IF ELSE CONTROL FLOW  ----\n";	
	if(num>0)
	{
		cout<<"\n [IF] Entered Number is "<<num;
	}
	else
	{
		cout<<"\n [ELSE] Entered number is below 0 is"<<num;
	}

		
	cout<<"\n----  FOR CONTROL FLOW  ----\n";
	for(int i=1;i<=num;i++)
	{
		cout<<"\n\t"<<i;
	}

	cout<<"\n\n----  WHILE CONTROL FLOW  ----\n";
	while(num>0)
	{
		cout<<"\n\n number is greater than 0 which is  : "<<num<<"\n\n";
		break;	
	}
	
	cout<<"\n----  SWITCH CONTROL FLOW  ----\n\n";
	int ch;

	cout<<"Enter Your Choice : \n 1. Case1 \n 2. Case2 \n 3. Exit \n\n";
	cin>>ch;

	switch(ch)
	{
		case 1 : cout<<"\n Case one is executing... \n";
		break;

		case 2 : cout<<"\n Case two is executing... \n";
		break;
		
		default: cout<<"\n Default case ... ";	
		break;
	
	}
	
	return 0;
}


/*
OUTPUT :
student@student-OptiPlex-3020:~/Desktop/170847980004$ g++ ControlFlow.cpp
student@student-OptiPlex-3020:~/Desktop/170847980004$ ./a.out
Enter Any Number for control Flow Operations :10

----  IF ELSE CONTROL FLOW  ----

 [IF] Entered Number is 10
----  FOR CONTROL FLOW  ----

	1
	2
	3
	4
	5
	6
	7
	8
	9
	10

----  WHILE CONTROL FLOW  ----


 number is greater than 0 which is  : 10


----  SWITCH CONTROL FLOW  ----

Enter Your Choice : 
 1. Case1 
 2. Case2 
 3. Exit 

1

 Case one is executing... 
*/
