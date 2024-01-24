#include <bits/stdc++.h>

using namespace std;
int n, k;
int x;
int f;
int coke = 0;
vector<int> v;
vector<int> v1; 

int main()
{
    cin >> n>> k;
    int l = 0;
    int r = n - 1;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
      v.push_back(x); 
    }
    for(int i =0; i < n; i++){
        cin>>f; 
        v1.push_back(f);
    }
 

    while (k > 0)
    {
        for(int i =0; i<n; i++){
            v1[i] = v1[i] - v[i];
            if(v1[i] < 0){
                k  = k + v1[i];
                v1[i] = 0;
            }
        }
        if(k<0){
            break; 
        }else{
            coke++; 
        }
    }
        cout << coke ;
    return 0;
}