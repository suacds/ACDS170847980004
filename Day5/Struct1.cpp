/*
Example: Store Information in Structure and Display it
*/

#include <iostream>
using namespace std;

struct student
{
    char name[50];
    int roll;
    float marks;
} s[10];

int main()
{
    cout << "Enter information of students: " << endl;

    // storing information
    for(int i = 0; i < 10; ++i)
    {
        s[i].roll = i+1;
        cout << "For roll number" << s[i].roll << "," << endl;

        cout << "Enter name: ";
        cin >> s[i].name;

        cout << "Enter marks: ";
        cin >> s[i].marks;

        cout << endl;
    }

    cout << "Displaying Information: " << endl;

    // Displaying information
    for(int i = 0; i < 10; ++i)
    {
        cout << "\nRoll number: " << i+1 << endl;
        cout << "Name: " << s[i].name << endl;
        cout << "Marks: " << s[i].marks << endl;
    }

    return 0;
}



/*

OUTPUT :

student@student-OptiPlex-3020:~/Desktop/ACDS170847980004/Day5$ g++ Struct1.cpp
student@student-OptiPlex-3020:~/Desktop/ACDS170847980004/Day5$ ./a.out
Enter information of students: 
For roll number1,
Enter name: SHYAMJI 
Enter marks: 75

For roll number2,
Enter name: SUMIT
Enter marks: 69

For roll number3,
Enter name: PUNIT
Enter marks: 78

For roll number4,
Enter name: SAYAM
Enter marks: 80

For roll number5,
Enter name: LISA
Enter marks: 74

For roll number6,
Enter name: SANJEEV
Enter marks: 25

For roll number7,
Enter name: LEKHRAJ
Enter marks: 56

For roll number8,
Enter name: RAM
Enter marks: 25

For roll number9,
Enter name: LAXMAN
Enter marks: 65

For roll number10,
Enter name: ASD
Enter marks: 45

Displaying Information: 

Roll number: 1
Name: SHYAMJI
Marks: 75

Roll number: 2
Name: SUMIT
Marks: 69

Roll number: 3
Name: PUNIT
Marks: 78

Roll number: 4
Name: SAYAM
Marks: 80

Roll number: 5
Name: LISA
Marks: 74

Roll number: 6
Name: SANJEEV
Marks: 25

Roll number: 7
Name: LEKHRAJ
Marks: 56

Roll number: 8
Name: RAM
Marks: 25

Roll number: 9
Name: LAXMAN
Marks: 65

Roll number: 10
Name: ASD
Marks: 45
student@student-OptiPlex-3020:~/Desktop/ACDS170847980004/Day5$ 

*/
