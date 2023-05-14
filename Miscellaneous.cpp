#include <bits/stdc++.h>
#include <set>
using namespace std;
typedef long long int ll; 
///bella ciao --code chef june long challenge 
// Driver Program to test above function
int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll D,d,p,q,count = 0,x,y;

        cin >> D >> d >> p >> q;

        x = D/d;

        if (x%2 == 0){
            count += d*((x/2) * (2*p + (x-1) * q)) ;
        } 
        else {
            count += d * (x * (p + (x-1) * q ) );
        }

        count += (D%d) * (p + (x) * q);

        cout << count << endl; 
    }

    return 0;
}