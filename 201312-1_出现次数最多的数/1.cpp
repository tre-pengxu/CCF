#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n;
    map<int, int> p;
    int ans = 0;
    int num = 0;
    
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int t;
        cin >> t;
        p[t]++;
    }
    for (map<int, int>::iterator it = p.begin(); it != p.end(); ++it) {
        if (it->second > num) {
            num = it->second;
            ans = it->first;
        }
    }
    cout << ans << endl;

    return 0;
}