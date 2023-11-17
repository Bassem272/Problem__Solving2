#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int max = -10000; 
    int sum = 0 ; 
    while( n--){
        int l,r;
        cin>>l>>r;
        sum -=l;
        sum +=r;
        max = max>sum?max:sum;
        
    }
    cout<<max<<endl;
    return 0; 
}