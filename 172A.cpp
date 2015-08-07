#include <bits/stdc++.h>

using namespace std;

int main(){
	string str;
	cin >> str;
	int NameLength = str.length();
	if(islower(str[0])) str[0] = toupper(str[0]);
	// for (int forLoop = 1; forLoop < NameLength; ++forLoop)
	// {
 //     str[forLoop] = tolower(str[forLoop]);
	// }

	cout << str << endl;
    return 0;
}