#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
  int n;
  cin >> n;
  int maxi = -10000, mini = 10000;
  int mx = -1, mi = -1;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    if (maxi < x)
    {
      maxi = x;
      mx++;
    }
    if (mini > x)
    {
      mini = x;
      mi++;
    }
  }
  if ((mx + mi) < 0)
  {
    mx = 0;
    mi = 0;
  }

  cout << (mx + mi) << endl;

  return 0;
}