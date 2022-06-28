// Hoppock, Zachary
// doWhileToWhile.cpp
// Oct. 11, 2020
// Changing a previously do while loop into a normal while loop
// Version # 1
#include <iostream>

using namespace std;
int main()
{
int n;
cin >> n;
double x = 0;
double s = 1;
while (s > 0.01)
{
   s = 1.0 / (1 + n * n);
   n++;
   x = x + s;
}

cout << x;
  
return 0;
}