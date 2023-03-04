#include<bits/stdc++.h>
using namespace std;
int main()

{ double R, pi = 3.141592653;


  cin >> R;
  double Area = pi * R * R;
  //cout << Area << setprecision(9)<< endl;
  std::cout << std::fixed << std::setprecision(9) <<  Area;

  return 0;
}
