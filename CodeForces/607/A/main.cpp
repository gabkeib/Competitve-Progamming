#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        string s;
        cin >> s;
        if (s.back() == 'a') cout << "KOREAN" << endl;
        else if (s.back() == 'u') cout << "JAPANESE" << endl;
        else cout << "FILIPINO" << endl;
    }
    return 0;
}
