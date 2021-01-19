#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	// quirky quantifier = odd number
	cout << (n % 2 == 0 ? 0 : 1) << '\n';
	return 0; 
}
