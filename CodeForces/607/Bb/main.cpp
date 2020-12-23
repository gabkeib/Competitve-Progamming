#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        string a, b;
        cin >> a >> b;
        if (a < b) cout << a << endl;
        else {
            int t = b.size();
            int minn = min(a.size(), b.size());
            string to = a;
            sort(to.begin(), to.end());
            for (int i = 0; i < to.size(); i++){
                if (a[i] != to[i]){
                    for (int j = (a.size() - 1); j > i; j--){
                        if (a[j] == to[i]){
                            swap(a[i], a[j]);
                            j = 0;
                        }
                    }
                    i = a.size();
                }
            }
            if (a < b) cout << a << endl;
            else cout << "---" << endl;
        }
    }
    return 0;
}
