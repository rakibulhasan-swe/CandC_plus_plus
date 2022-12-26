#include <bits/stdc++.h>
using namespace std;
int total = 0;

void permute(int i, string &s)
{
	// base case
	if (i == (s.length() - 1)) {
		total++;
		return;
	}


	// loop from j = 1 to length of string
	for (int j = i; j < s.length(); j++) {
		if (j>i && s[i] == s[j])
			continue;
		if (j>i && s[j-1] == s[j]) {
			continue;
		}

		// swap the elements
		swap(s[i], s[j]);

		// recursion call
		permute(i + 1, s);

		//backtrack
		swap(s[i], s[j]);
	}
}

int main()
{
	string s;
	cin >> s;
	// sort
	sort(s.begin(), s.end());

	// Function call
	permute(0, s);
	cout << total << endl;

	return 0;
}
