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
    cin.ignore();
    while (n--)
    {
        string str;
        getline(cin, str);
        // cin >> str;
        regex charRegex("[A-Za-z]+");
        smatch charMatches;
        sregex_iterator it(str.begin(), str.end(), charRegex);
        sregex_iterator end;
        vector<string> wordVec;
        while (it != end)
        {
            smatch charMatch = *it;
            string word = charMatch[0];

            wordVec.push_back(word);

            ++it;
        }
        string lastWord = wordVec[wordVec.size() - 1];
          cout<<lastWord.length()<<endl;
        // for (const auto &word : wordVec)
        // {
        //     cout << word << " ";
        // }
        // vector<char> v;
        // int flag = 0;
        // for (int i = 0; i < charVec.size(); i++)
        // {
        //     if (i + 1 < charVec.size() && tolower(charVec[i]) == tolower(charVec[i + 1]))
        //     {
        //         v.push_back(charVec[i]);
        //         i++;
        //         flag = 1;
        //     }
        //     else if (flag == 1)
        //     {
        //         v.push_back(charVec[i]);
        //         flag = 0;
        //     }
        //     else
        //     {
        //         v.push_back(charVec[i]);
        //     }
        // }
        // if (flag == 1)
        // {
        //     v.push_back(charVec.back());
        // }
        // for (auto &i : v)
        // {
        //     cout << i;
        // }
        // cout << endl;
    }
    return 0;
}