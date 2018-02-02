/* Write the definition for a class called budget that has floating point data members income and tax. The class has the following member functions:

void show(float, float) to set the specified value in object
void display() to display income and tax
void calculate () to calculate tax on the basis of income (Rs 10000.0) and tax rate (18.0)
 
*/

#include<iostream>
using namespace std;

class Bugdet
{

	float income,tax;

	public:

  	void show(float i, float t)
	{
		cout << "\nEnter Income : \t";
  		cin >>income;
  		cout << "\nEnter Tax on Income : \t";
  		cin >> tax;
		
		i=income;
		t=tax;	
	}

	void display()
	{
		cout<<"\n\t Income of Employee : "<<income;
		cout<<"\n\t Total Tax on income: "<<tax; 	
	}

	void calculate()
	{
		float Tax_value;
		Tax_value=((income*tax)/100);
		cout<<"\n\t Total Income Tax Value : \t"<<Tax_value<<"\n";
	}
	
};

int main() 
{
	
	Bugdet B;
	B.show(10, 20);
	B.display();
	B.calculate();

    return 0;
}

/*Output :~
student@student-OptiPlex-3020:~/Downloads/ACDS170847980004/Day4$ g++ BugdetTax.cpp
student@student-OptiPlex-3020:~/Downloads/ACDS170847980004/Day4$ ./a.out
Enter Income : 	100

Enter Tax on Income : 	18

	 Income of Employee : 100
	 Total Tax on income: 18
	 Total Income Tax Value : 	18
student@student-OptiPlex-3020:~/Downloads/ACDS170847980004/Day4$ 


*/

