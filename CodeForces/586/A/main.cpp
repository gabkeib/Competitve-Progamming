#include <iostream>

using namespace std;

int main()
{
    int n;
    string s;
    cin >> n;
    cin >> s;
    int zc = 0;
    for (int i = 0; i < n; i++){
        if (s[i] == 'z') zc++;
    }
    int left = n - (zc*4);
    int ones = left/3;
    for (int i = 0; i < ones; i++) cout << "1" << " ";
    for (int i = 0; i < zc; i++) cout << 0 << " ";
    return 0;
}
