#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<cmath>

using namespace std;
int main() {
	string a = "halloklempnerdasistfantastischfluggegecheimen", s;
	map<char, int> q;
	double y = 1;
	for (int i = 0; i < a.size(); i++) {
		q[a[i]]++;
	}
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		y = y * q[s[i]];
	}
	cout << y / pow(a.size(), 4);

}
