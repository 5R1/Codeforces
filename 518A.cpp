#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#define gc getchar_unlocked
#define arrmax 100000
using namespace std;


int main(){
	string s,t;
 	cin >> s >> t;
 	for(int i=s.size() - 1;i >= 0;i--){
    	s[i]++; 
    	if (s[i] <= 'z')
    		break;
    	else 
    		s[i] = 'a';
    }
 	if(s!=t)
 		cout << s << endl;
 	else
 		cout << "No such string" << endl;
    return 0;
}