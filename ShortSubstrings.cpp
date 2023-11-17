#include <iostream>
#include <regex>
#include <string>
#include <set>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string str;
        cin >> str;
        regex charRegex("[A-Za-z]");
        smatch charMatches;
        sregex_iterator it(str.begin(), str.end(), charRegex);
        sregex_iterator end;
        vector<char> charVec;
        while (it != end)
        {
            smatch charMatch = *it;
            char ch = charMatch.str()[0];
            if (isalpha(ch))
            {
                charVec.push_back(tolower(ch));
            }
            ++it;
        }
        vector<char> v;
        int flag = 0;
        for (int i = 0; i < charVec.size(); i++)
        {
            if (i + 1 < charVec.size() && tolower(charVec[i]) == tolower(charVec[i + 1]))
            {
                v.push_back(charVec[i]);
                i++;
                flag = 1;
            }
            else if (flag == 1)
            {
                v.push_back(charVec[i]);
                flag = 0;
            }
            else
            {
                v.push_back(charVec[i]);
            }
        }
        if (flag == 1)
        {
            v.push_back(charVec.back());
        }
        for (auto &i : v)
        {
            cout << i;
        }
        cout << endl;
    }
    return 0;
}