/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>

long Factorial(int no); //declare functions
long nCr(int n, int r);

int main() 
{
  int n, r; //declare variables

  std::cout << "Enter a value for n "; //getting user inputs
  std::cin >> n;
  std::cout << "Enter a value for r ";
  std::cin >> r;

  std::cout << "nCr = "; //printing th eoutput
  std::cout << nCr(n,r); //calling the function
  std::cout << std::endl;
  return 0;
}

long nCr(int n, int r)
{
  return Factorial(n) / (Factorial(r) * Factorial(n-r)); //calculation
}

long Factorial(int no)
{
  int i, fac = 1;

  for (int i=no; i >= 1; i--) 
  {
    fac = fac * i; //calculation
  }

  return fac ;
}
