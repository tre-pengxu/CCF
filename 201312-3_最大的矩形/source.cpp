#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    vector<int> a;
    int ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }

    for (int i = 0; i < n; i++) {
        int h = a[i];
        for (int j = i; j < n; j++) {
            if (a[j] < h)
                h = a[j];
            int s = (j - i + 1) * h;
            if (ans < s)
                ans = s;
        }
    }
    cout << ans << endl;
    return 0;
}
