#include<bits/stdc++.h>
using namespace std;
int main()

{ float X, Y;
  cin >> X >> Y;

    if (X == 0 && Y == 0)
      cout << "Origem" << endl;
    else if (X == 0 && Y != 0)
      cout << "Eixo X" << endl;

    else if (X != 0 && Y == 0)
      cout << "Eixo Y" << endl;

    else if (X > 0 && Y >0)
      cout << "Q1" << endl;

    else if (X < 0 && Y >0)
      cout << "Q2" << endl;

    else if (X < 0 && Y <0)
      cout << "Q3" << endl;

    else if (X > 0 && Y < 0)
      cout << "Q4" << endl;


  return 0;
}


////////////////////////////////////////////////

#include<bits/stdc++.h>
using namespace std;
int main()

{ float X, Y;
  cin >> X >> Y;
  if (X > 0 && Y > 0) cout << "Q1";
  else if (X < 0 && Y > 0) cout << "Q2";
  else if (X < 0 && Y < 0) cout << "Q3";
  else if (X > 0 && Y < 0) cout << "Q4";
  else if (X == 0 && Y == 0) cout << "Origem";
  else if (X == 0 && Y ) cout << "Eixo Y";
  else if (X && Y==0 ) cout << "Eixo X";


  return 0;
}
