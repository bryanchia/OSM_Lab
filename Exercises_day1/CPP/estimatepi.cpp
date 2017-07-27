#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()

{

  int num = 100000000;
  double R = 1.0;
  double xl = -1.0;
  double xu = 1.0;
  double yl = -1.0;
  double yu = 1.0;
  double sum = 0.0;

  for (int i = 0; i  < num; i++)
    {

      double x = (rand() * 1.0 / RAND_MAX) * 2 * R - R;
      double y = (rand() * 1.0 / RAND_MAX) * 2 * R - R;
      double A = sqrt(pow(x, 2) + pow(y,2));
      double v = 0.0;

                    if (A <= 1)
                    {
                        v = 1.0;
                    }
                    else
                    {
                        v = 0.0;
                    };


      sum +=v;

    };

  double pi =( (yu-yl)*(xu-xl) / num ) * sum ;

  cout << pi;

  return 0;

}
