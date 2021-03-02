#include<iostream>
#include<set>
#include<vector>
#include<string>

using namespace std;

void ql(string a, int position, set<string>& q) {
	if (position >= a.size()) {
		q.insert(a);
		return;
	}
	else {
		for (int i = position; i < a.size(); i++) {
			swap(a[i], a[position]);
			ql(a, position + 1, q);
		}
	}
}
void asd(string s2, int& n, set<string>& q) {
	if (n == s2.size()) {
		ql(s2, 0, q);
		return;
	}
	else {
		for (int j = 0; j < s2.size(); j++) {
			for (int i = 0; i < n - s2.size(); i++) {
				s2 = s2 + s2[j];
				asd(s2, n, q);
			}
		}
	}
}
int main() {
	int n;
	string s1, s3 = "";
	char w;
	set <string> q;
	cin >> n;
	cin >> s1;
	if (n == s1.size()) {
		ql(s1, 0, q);
		for (auto c : q) {
			cout << c << "\n";
		}
	}
	else {
		for (int i = 0; i < n - s1.size() + 1; i++) {
			s3 = s1[0];
			s1.erase(0, 1);
			asd(s1 + s3, n, q);
			s1 = s1 + s3;
			s3.erase(0, 1);
		}
		for (auto c : q) {
			cout << c << "\n";
		}
	}
}