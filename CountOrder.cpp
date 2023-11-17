#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{

    int n;
    cin >> n;
    vector<int> v1;
    vector<int> v2;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v1.push_back(x);
    };
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v2.push_back(a);
    };
    vector<int> v3 = v1;
    sort(v3.begin(), v3.end());
    int count1 = 0, count2 = 0;
    while (v1 != v3)
    {
        next_permutation(v3.begin(), v3.end());
        count1++;
    }
    sort(v3.begin(), v3.end());
    while (v3 != v2)
    {
        next_permutation(v3.begin(), v3.end());
        count2++;
    }
    int ans = abs(count1 - count2);
    cout << ans << endl;
    return 0;
}