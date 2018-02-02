/*
Example: Source Code to Add Two Complex Numbers
*/

#include <iostream>
using namespace std;

typedef struct complex
{
    float real;
    float imag;
} complexNumber;

complexNumber addComplexNumbers(complex, complex);

int main()
{
    complexNumber n1, n2, temporaryNumber;
    char signOfImag;

    cout << "For 1st complex number," << endl;
    cout << "Enter real and imaginary parts respectively:" << endl;
    cin >> n1.real >> n1.imag;

    cout << endl << "For 2nd complex number," << endl;
    cout << "Enter real and imaginary parts respectively:" << endl;
    cin >> n2.real >> n2.imag;

    signOfImag = (temporaryNumber.imag > 0) ? '+' : '-';
    temporaryNumber.imag = (temporaryNumber.imag > 0) ? temporaryNumber.imag : -temporaryNumber.imag; 

    temporaryNumber = addComplexNumbers(n1, n2);    
    cout << "Sum = "  << temporaryNumber.real << temporaryNumber.imag << "i";
    return 0;
}

complexNumber addComplexNumbers(complex n1,complex n2)
{
      complex temp;
      temp.real = n1.real+n2.real;
      temp.imag = n1.imag+n2.imag;
      return(temp);
}


/*

OUTPUT :

student@student-OptiPlex-3020:~/Desktop/ACDS170847980004/Day5$ g++ Struct2.cpp
student@student-OptiPlex-3020:~/Desktop/ACDS170847980004/Day5$ ./a.out
For 1st complex number,
Enter real and imaginary parts respectively:
45
65

For 2nd complex number,
Enter real and imaginary parts respectively:
21
36
Sum = 66101istudent@student-OptiPlex-3020:~/Desktop/ACDS170847980004/Day5$ 
*/
