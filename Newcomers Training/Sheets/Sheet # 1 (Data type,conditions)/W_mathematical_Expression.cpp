#include<bits/stdc++.h>
using namespace std;
int main()

{ float a,b,c,d;
  char s,q;
  cin >> a  >> s >> b >> q >>c;

  if (s =='+')
        d=a+b;
  else if (s =='-')
        d=a-b;
  else if (s =='*')
        d=a*b;
  if (c==d)
        cout<<"Yes";
  else
        cout<<d;
  return 0;
}

