#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()

{
    int a, b, c;
cin >> a >> b >> c;

int m,n;
m=max(a,b);
m=max(m,c);
n=min(a,b);
n=min(n,c);

cout<<n<<" "<<m<<endl;

  return 0;
}
