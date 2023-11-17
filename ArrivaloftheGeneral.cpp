#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
int n ;
cin >> n;
int maxi = -10000;
int mini = 10000;
int mx, mi;
for ( int i =1; i<=n; i++){
    int a;
    cin>> a;
    // maxi = a>maxi ?a:maxi;
    // mini = a<=mini ?a:mini;
    if(a>maxi){
        maxi = a;
        mx =i;
    }
    if(a<=mini){
        mini = a;
        mi = i;
    }
}
int ans;
if(mx > mi){
     ans = (mx-1) +(  n - mi) -1;
    
}else{
    ans = (mx-1) + (n - mi) ;
}
cout << ans << endl;

    return 0;
}