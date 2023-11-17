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
    smatch charMatches;
    sregex_iterator it(str.begin(), str.end(), charRegex);
    sregex_iterator end;
    set<char> charSet;
    while (it != end)
    {
        smatch charMatch = *it;
        char ch = charMatch.str()[0];
        if (isalpha(ch))
        {
            charSet.insert(tolower(ch));
        }
        ++it;
    }
    if (charSet.size() == 26)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}