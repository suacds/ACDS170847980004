/*
C++ Program to demonstrate the working of pointer.
*/


#include <iostream>
using namespace std;
int main() {
    int *pc, c;
    
    c = 5;
    cout << "\n Address of c (&c): " << &c << endl;
    cout << "\n Value of c (c): " << c << endl << endl;

    pc = &c;    // Pointer pc holds the memory address of variable c
    cout << "\n Address that pointer pc holds (pc): "<< pc << endl;
    cout << "\n Content of the address pointer pc holds (*pc): " << *pc << endl << endl;
    
    c = 11;    // The content inside memory address &c is changed from 5 to 11.
    cout << "\n Address pointer pc holds (pc): " << pc << endl;
    cout << "\n Content of the address pointer pc holds (*pc): " << *pc << endl << endl;

    *pc = 2; 
    cout << "\n Address of c (&c): " << &c << endl;
    cout << "\n Value of c (c): " << c << endl << endl;

    return 0;
}

/*

OUTPUT:


student@student-OptiPlex-3020:~/Desktop/ACDS170847980004/Day5$ g++ Pointer2.cpp
student@student-OptiPlex-3020:~/Desktop/ACDS170847980004/Day5$ ./a.out

 Address of c (&c): 0x7ffed5d80734

 Value of c (c): 5


 Address that pointer pc holds (pc): 0x7ffed5d80734

 Content of the address pointer pc holds (*pc): 5


 Address pointer pc holds (pc): 0x7ffed5d80734

 Content of the address pointer pc holds (*pc): 11


 Address of c (&c): 0x7ffed5d80734

 Value of c (c): 2

student@student-OptiPlex-3020:~/Desktop/ACDS170847980004/Day5$ 

*/
