#include <cstring>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <memory.h>
#include <cassert>

using namespace std;

int main(int argc, char const *argv[])
{
  int  b, n;
  int arr[106];
  cin >> n;
  for (int i = 1; i <= n; i++)
  { 
    cin >> b; arr[b] = i; 
  }
  for (int i = 1; i <= n; i++)
  {
    cout << arr[i] << " "; 
  }
  return 0;
}