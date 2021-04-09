#include <bits/stdc++.h>

using namespace std;
	
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		long long n;
		cin >> n;
		/**
			based from observation:
			if n = 6:
			
			numbers less than or equal to 'n':
			1 2 3 4 5 6
			
			6 mod 1 = 0
			6 mod 2 = 0
			6 mod 3 = 0
			6 mod 4 = 2
			6 mod 5 = 1
			6 mod 6 = 0
			
			therefore, we can say that all numbers up to 'n' itself are the answers
		*/
		cout << n << '\n';
	}
	return 0;
}
