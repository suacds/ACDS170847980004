/* WAP using preincrement and PostDecement Operators ++|-- */

#include <iostream>
using namespace std;
int main()
   {
     int c;

     cout<< "\n Enter number : ";
     cin>>c;

     cout<<"---- Preincrement ----"<<endl;

     cout <<"Original Number:"<< c << endl;               
     cout <<""<< ++c << endl; 
     cout <<"After PreIncrement:"<< c << endl; 
    
     cout<<"---- Postincrement ----"<<endl;
     c=5;
     cout <<"Original Number:"<< c << endl; 
     cout <<""<< c++ << endl; 
     cout <<"After PostIncrement:"<< c << endl;                      
     cout << endl; 

     cout<<"---- Pre-Decrement ----"<<endl;
     c=5;
     cout <<"Original Number:"<< c << endl;                   
     cout <<""<< --c << endl; 
     cout <<"After PreDecrement:"<< c << endl; 

     cout<<"---- Post-Decrement ----"<<endl;
     c=5;
     cout <<"Original Number: "<< c << endl;                   
     cout <<""<< c-- << endl; 
     cout <<"After PostDecrement:"<< c << endl; 

     return 0; 
  }


/*
OUTPUT :
student@student-OptiPlex-3020:~/Desktop/170847980004$ g++ prepost.cpp
student@student-OptiPlex-3020:~/Desktop/170847980004$ ./a.out

 Enter number : 10
---- Preincrement ----
Original Number:10
11
After PreIncrement:11
---- Postincrement ----
Original Number:5
5
After PostIncrement:6

---- Pre-Decrement ----
Original Number:5
4
After PreDecrement:4
---- Post-Decrement ----
Original Number: 5
5
After PostDecrement:4
*/

