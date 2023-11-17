#include <iostream>
#include <regex>
#include <string>
#include <set>
using namespace std; 


int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;

    regex charRegex("[A-Za-z]");
    smatch charMatches;\
    sregex_iterator it( str.begin(), str.end(), charRegex);
    sregex_iterator end;
    set<string> charSet;
while(it != end){
    smatch charMatch = *it;
    charSet.insert(charMatch.str());
    // cout<<charMatch.str()<<endl;
    ++it;
}

    regex_search(str,charMatches,charRegex);

// for(auto m : charSet){
//     cout<<m<<endl;
// };
// cout<<charMatches.size()<<endl;
if( charSet.size() == 27){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}





    return 0;
}