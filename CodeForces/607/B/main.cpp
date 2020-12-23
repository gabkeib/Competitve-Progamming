#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        string a, b;
        cin >> a >> b;
        bool findd = false;
        bool usedd = false;
        int smaller = min(a.size(), b.size());
        for (int i = 0; i < smaller; i++){
            if (a[i] < b[i]) {
                findd = true;
                i = smaller;
            }
            else if (a[i] == b[i]) {
                if (a.size() < b.size())
                findd = true;
                continue;
            }
            else {
                if (!usedd){
                bool got = false;
                for (int t = i + 1; t < a.size(); t++){
                        //cout << a[t] << " " << b[i] << endl;
                    if (a[t] < b[i]){
                        swap(a[i], a[t]);
                        got = true;
                        usedd = true;
                        findd = true;
                        t = a.size();
                    }
                }
                if (!got){
                    for (int t = i + 1; t < a.size(); t++){
                    if (a[t] <= b[i]){
                        swap(a[i], a[t]);
                        got = true;
                        usedd = true;
                        findd = true;
                        t = a.size();
                    }
                }
                } else {
                    findd = true;
                    i = smaller;
                }
                if (!got){
                    findd = false;
                    i = smaller;
                }
                } else {
                    findd = false;
                    i = smaller;
                }
            }
        }
        if (!findd) cout << "---" << endl;
        else cout << a << endl;

    }
    return 0;
}
