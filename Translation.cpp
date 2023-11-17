#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main(){
   string str;
   cin>>str;
   string strr; 
   cin>>strr;
   string str1(str.rbegin(),str.rend());

   if ( strr == str1 ){
    cout<<"YES"<<endl;
   }else{
    cout<<"NO"<<endl;
   }


    return 0;
}