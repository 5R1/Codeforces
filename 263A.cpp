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
  int x, y;
  for(int i = 1; i <= 5; i++){
    for(int j = 1; j <= 5; j++){
      cin >> arr[i][j];
      if(arr[i][j] == 1){
        x = i; y = j;
      }
    }
  }
  
  int test = abs(3 - x) + abs(3 - y);
  cout << test;
  return 0;
}