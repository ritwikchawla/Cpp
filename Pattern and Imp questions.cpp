/*
* * * * 
* * * * 
* * * * 
* * * * 
* * * * 
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int row ,col;
  cin >> row >> col;
  for(int i=0;i<row;i++){
    for(int j = 0;j<col;j++){
      cout << "* ";
    }
    cout << endl;
  }
  return 0;
}*/




// ****
// *  *
// *  *
// *  *
// ****
// #include <iostream>
// using namespace std;

// int main()
// {
//   int row ,col;
//   cin >> row >> col;
  
//   for (int i = 1; i<=row;i++){
//     if(i == 1 || i == row){
//       for(int j = 1;j<=col;j++){
//       cout << "*";
//       }
//     }
//     else {
//       for(int j = 1;j<=col;j++){
//         if(j == 1 || j == col){
//           cout << "*";
//         }
//         else{
//           cout << " ";
//         }
//       }
//     }
//     cout << endl;
//   }
    
//   return 0;
// }


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  for(int i = 2;i<n;i++){
    if(n%i==0){
      cout << "Non Prime"<< endl;
    }
    else{
      cout << "Prime"<<endl;
    }
  }

  return 0;
}