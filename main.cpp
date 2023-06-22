#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main() {
	string a;
	string b;

	cin >> a >> b;

	reverse(a.begin(), a.end());

	cout << ((a == b) ? "YES" : "NO");
	return 0;	
} 
