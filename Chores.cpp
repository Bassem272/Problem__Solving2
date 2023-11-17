#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    int n, x, y;
    cin >> n >> x >> y;
    int sum = 0;

    for (int i = 0; i < (n - x); i++)
    {
        int a;
        cin >> a;
        sum += a;
    }
    sum += (x * y);
    cout << sum << endl;

    return 0;
}