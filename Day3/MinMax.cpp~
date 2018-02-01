/*WAP to Create 1D array and find minimum and maximum numbers among */

#include <iostream> 
using namespace std;

int main()
{
	int Arr[50],n,i,small,large;

	cout<<"\n\t Enter number of elements you want to insert :";
	cin>>n;

	for(i=0;i<n;i++)
	{
		cout<<"Enter element :"<<i+1<<":";
		cin>>Arr[i];
	}

	small=Arr[0];
	large=Arr[0];

	for(i=1;i<n;i++)
	{
		if(Arr[i]<small)
			small=Arr[i];
		if(Arr[i]>large)
			large=Arr[i];
	}

	cout<<"\nLargest element in array is :"<<large<<endl;
	cout<<"\nSmallest element in array is :"<<small<<endl;
    
	return 0;
}

/*
OUTPUT
student@student-OptiPlex-3020:~/Desktop/ACDS170847980004/Day3$ g++ MinMax.cpp
student@student-OptiPlex-3020:~/Desktop/ACDS170847980004/Day3$ ./a.out

	 Enter number of elements you want to insert :5
Enter element :1:2
Enter element :2:5
Enter element :3:-6
Enter element :4:3
Enter element :5:4

Largest element in array is :5

Smallest element in array is :-6
student@student-OptiPlex-3020:~/Desktop/ACDS170847980004/Day3$
*/
