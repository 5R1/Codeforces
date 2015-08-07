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

int arr[5][5];

int main(int argc, char const *argv[]){
  int n;
  int temp;
  static int count;
  cin >> n;
  int arr[n];
  for(int i = 0; i < n; i++){
    cin >> arr[n];
  }
  for(int i = 0; i < n - 1; i++){
    if(arr[i] > arr[i + 1]){
      
      count++;
    }
  }
  cout << count << endl;
  return 0;
}