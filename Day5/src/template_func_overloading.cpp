#include <iostream>
using namespace std;

// Declaring the template function.
template <class T>
// Overloading the template function.
void display(T t1)
{
   cout << "Inside the display template function: " << t1 << endl;
}

// Overloading the template function with an integer parameter.
void display(int t1)
{
   cout << "Inside the overloaded integer-display template function: " << t1 << endl;
}

// main function
int main()
{
   // Calling the overloaded template function with different arguments.
   display(20);
   display(20.55);
   display('G');

   return 0;
}
