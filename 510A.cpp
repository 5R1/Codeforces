#include <bits/stdc++.h>

using namespace std;
#define LL long long


const int N = 100001;
const int mod = (int)(1e9 + 7);

void pj(int n)
{
	while (n--)
		cout << '#';
	cout << endl;
}
void hj(int n)
{
	n--;
	while (n--)
		cout << '.';
	cout << '#' << endl;
}
void qj(int n)
{
	n--;
	cout << '#';
	while (n--)
		cout << '.';
	cout << endl;
}
int main()
{
	int i, n, m;
	cin >> n >> m;
	for (i = 1; i <= n; i++)
	{
		if (i % 4 == 1 || i % 4 == 3) pj(m);
		else if (i % 4 == 2) hj(m);
		else if (i % 4 == 0) qj(m);
	}
}