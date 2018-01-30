/* WAP to calculate final gst price */

#include<iostream>
using namespace std;
int main()
{

	float amt,GST,rate;
	cout<<"\n Enter amount of goods  : \n";
	cin>>amt;
	cout<<"\n Enter rate  : \n";
	cin>>rate;
	GST=(amt*rate)/100;
	cout<<"\n gst is ::"<<GST <<"\n";
	


	return 0;
}

/*
student@student-OptiPlex-3020:~/Desktop/170847980004$ ./a.out

 Enter amount of goods  : 
523

 Enter rate  : 
21

 gst is ::109.83
student@student-OptiPlex-3020:~/Desktop/170847980004$ 

*/
