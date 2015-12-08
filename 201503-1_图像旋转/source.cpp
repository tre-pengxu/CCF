#include <iostream>
using namespace std;

int main()
{
	int m, n;
	int p[1000][1000];
	cin >> m >> n;
	
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> p[i][j];
		}
	}
	for (int i = n - 1; i >= 0; i--) {
		for (int j = 0; j < m; j++) {
			cout << p[j][i] << ' ';
		}
		cout << endl;
	}
	return 0;
}
