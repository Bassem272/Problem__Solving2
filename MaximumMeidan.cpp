#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 
typedef long long ll; 
  int n,k; 
vector<ll> a;

bool ok (ll mid){
    ll sum = 0; 
    for(int i=n/2;i<n;i++){
        if( mid - a[i] >=0 )
         {sum += (mid - a[i]);
         }
        
    } 
    //cout << sum << endl; 
    return sum<=k;
}



int main(){
  
    cin>>n>>k;
    a.resize(n);
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
    sort(a.begin(), a.end());
    ll lo= a[n/2] ; ll hi = 1e10; 
    ll mid; ll ans  ;
    while(lo<=hi){
        mid = (lo+hi)/2;
        if(ok(mid)){
            ans = mid; 
            lo = mid + 1 ; 
        }else { 
            hi = mid-1;
        }
    }
cout << ans << endl;
return 0 ;

}
