/*

 pointers as a arguments:

*/

#include <iostream>
using namespace std;

void increment_all (int* start, int* stop)
{
  int * current = start;
  while (current != stop) {
    ++(*current);  // increment value pointed
    ++current;     // increment pointer
  }
}

void print_all (const int* start, const int* stop)
{
  const int * current = start;
  while (current != stop) {
    cout << *current << '\n';
    ++current;     // increment pointer
  }
}

int main ()
{
  int numbers[] = {10,20,30};
  increment_all (numbers,numbers+3);
  print_all (numbers,numbers+3);
  return 0;
}


/*

OUTPUT :


@student-OptiPlex-3020:~/Desktop/ACDS170847980004/Day5$ ./a.og++ Pointer1.cpp
student@student-OptiPlex-3020:~/Desktop/ACDS170847980004/Day5$ ./a.out
11
21
31


*/
