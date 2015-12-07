#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> positive_num;
	vector<int> negative_num;
	int n;
	int ans = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		if (t > 0)
			positive_num.push_back(t);
		else
			negative_num.push_back(t);
	}
	for (vector<int>::iterator it = positive_num.begin(); it != positive_num.end(); it++) {
		int t = (*it) * (-1);
		vector<int>::iterator result = find(negative_num.begin(), negative_num.end(), t);
		if (result != negative_num.end()) {
			ans++;
			//cout << t << "find!" << endl;
		}
	}
	cout << ans << endl;

	return 0;
}