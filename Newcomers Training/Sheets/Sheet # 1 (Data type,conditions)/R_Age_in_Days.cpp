#include<bits/stdc++.h>
using namespace std;
int main()

{ int days, years, months;
  cin >> days;

  years = days / 365;
  days -= 365 * years;
  months = days / 30;
  days -= 30 * months;
  cout <<years<<" years"<<endl;
  cout <<months<<" months"<<endl;
  cout <<days<<" days"<<endl;


  return 0;
}

