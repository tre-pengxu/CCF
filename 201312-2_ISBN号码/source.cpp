#include <iostream>
using namespace std;

int main()
{
    string str;
    int a[10], sum = 0;
    cin >> str;
    
    for (int i = 0, j = 0; i < str.length(); i++) {
        if (i == 1 || i == 5 || i == 11)
            continue;
        else {
            a[j] = str[i] - '0';
            j++;
        }
    }
    for (int i = 0; i < 9; i++) {
        sum += a[i] * (i + 1);
    }
    
    int code = sum % 11;
    char c = (code == 10 ? 'X' : (code + '0'));
    if (c == str[12])
        cout << "Right" << endl;
    else {
        str[12] = c;
        cout << str << endl;
    }
    return 0;
}
