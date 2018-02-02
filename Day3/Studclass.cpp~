/*
An array stores details of 10 students (rollno, name, marks in three subject). Write a program to create such an array and print out a list of students who have failed in more than one subject.
*/

#include<iostream>
using namespace std;

struct stud
{
	int roll;
	char nm[50];
	float m1, m2, m3;
};

typedef stud S;

int main()
{
	S student[10];

	for(int i =0 ; i < 10 ; i++)
	{
		cout << "\n Enter Roll no :  \t";
		cin >> student[i].roll;

		cout << "\n Enter Name : \t";
		cin>>student[i].nm;

		cout << "\n Enter marks of three subjects : \t";
		cin >> student[i].m1 >> student[i].m2 >> student[i].m3 ;

	}

	cout<< "\n STUDENTS FAILED IN MORE THAN 1 SUBJECT \n ";
	for(int i =0 ; i < 10 ; i++)
	{
		if(( student[i].m1< 40 && student[i].m2 < 40) || (student[i].m2 < 40 && student[i].m3 < 40) || 
		( student[i].m1 < 40 && student[i].m3 < 40))
		cout << student[i].roll  << "\t" << student[i].nm << "\n";
	}


}

/*
OUTPUT:

student@student-OptiPlex-3020:~/Desktop/ACDS170847980004/Day3$ g++ Studclass.cppstudent@student-OptiPlex-3020:~/Desktop/ACDS170847980004/Day3$ ./a.out
 Enter Roll no :  	1

 Enter Name : 	Shyam

 Enter marks of three subjects : 	56
54
23

 Enter Roll no :  	2

 Enter Name : 	DD

 Enter marks of three subjects : 	65
20
30

 Enter Roll no :  	5

 Enter Name : 	XW

 Enter marks of three subjects : 	56
23
65

 Enter Roll no :  	3

 Enter Name : 	sd

 Enter marks of three subjects : 	65 
36
23

 Enter Roll no :  	4 

 Enter Name : 	QQ

 Enter marks of three subjects : 	56
20
30

 Enter Roll no :  	6

 Enter Name : 	SS

 Enter marks of three subjects : 	65
32
45

 Enter Roll no :  	7

 Enter Name : 	TW

 Enter marks of three subjects : 	54
52
23

 Enter Roll no :  	8

 Enter Name : 	PO

 Enter marks of three subjects : 	56
23
65

 Enter Roll no :  	9

 Enter Name : 	60

 Enter marks of three subjects : 	70
80
90

 Enter Roll no :  	10

 Enter Name : 	SUMIT

 Enter marks of three subjects : 	60
20
50

 STUDENTS FAILED IN MORE THAN 1 SUBJECT 
 2	DD
3	sd
4	QQ
student@student-OptiPlex-3020:~/Desktop/ACDS170847980004/Day3$ 

*/
