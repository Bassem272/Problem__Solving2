#include <bits/stdc++.h>
using namespace std; 
int t,n,c,mid,cows,ans,temp;
vector<int> v;
bool check(int mid){
    cows = 1 ;
    temp = v[0];
    for(int i =1;i<n;i++){
        if(v[i]-temp>=mid){
            cows++;
            temp = v[i];
        }
    }
    if(  cows>=c    ){
    return true;

    }else{

    return false;
    } 
}
void solve(int l,int r){
    ans = -1; 
    while (l<=r)
    {
        mid = (l+r)/2;
        if(check(mid)){
            if(mid>ans){

            ans = mid; 
            l = mid+1;
            }
        }else{
            r = mid-1;
        }
        /* code */
    }
  
}

int main() {
cin>>t;
while(t--){
    cin>>n>>c;
    v.clear();
    v.resize(n);
    int x; 
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    
    solve(0,v[n-1]);
    cout<<ans<<endl;
}
    return 0; 
}