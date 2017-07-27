// my first program in C++
// //
//
#include <iostream>
#include <string>
#include<cmath>

int main()
{

   using namespace std;
   cout << "Enter a";
   double  a = 0.0 ;
   cin >> a;
   cout << "Enter b";
   double  b = 0.0;
   cin >> b;
   cout << "Enter c";
   int  c =  0.0;
   cin >> c;

   double x1 = (-b + sqrt(pow(b, 2.0) - 4.0 *a*c))/(2.0 * a);
   double x2 = (-b - sqrt(pow(b, 2.0) - 4.0 *a*c))/(2.0 * a);

   cout << "Roots are:" << endl;
   cout << x1<< endl;
   cout << x2<<endl;
     
   return 0;

}
