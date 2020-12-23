#include <iostream>

using namespace std;

int main()
{
    int q;
    cin >> q;
    for (int i = 0; i < q; i++){
        int a, b, n, s;
        cin >> a >> b >> n >> s;
        int countt = s/n;
        if (countt <= a) {
            s -= countt*n;
            if (s != 0){
                if (s <= b) cout << "YES" << endl;
                else cout << "NO" << endl;
            }
            else cout << "YES" << endl;
        }
        else {
            s -= a*n;
            if (s <= b) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}
