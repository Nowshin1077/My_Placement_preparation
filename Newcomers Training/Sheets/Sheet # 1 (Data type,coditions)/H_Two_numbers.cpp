#include<bits/stdc++.h>
using namespace std;
int main()

{ double A, B, X;
  cin >> A >> B;
  X  = A / B;
  cout << "floor " << A  << " / " << B  << " = " << floor(X) << endl;
  cout << "ceil " << A  << " / " << B  << " = " << ceil(X) << endl;
  cout << "round " << A  << " / " << B  << " = " << round(X) << endl;


  return 0;
}
