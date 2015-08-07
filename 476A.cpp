#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#define arrmax 100000
using namespace std;


int main(){
	int n, m;
	cin >> n >> m;
	
	if(m > n)
		cout << -1 << endl;
	else if(m == n){
		cout << m << endl;
	}
	else{
		int steps;
		if(n % 2 == 0){
			steps = n / 2;
		}
		else{
			steps = n / 2 + 1;
		}

		int test = steps;
		for (int i = 0; i < test; i++){
			if(steps % m == 0){
				break;
			}
			steps += 1;
		}
		cout << steps << endl;
	}

    return 0;
}