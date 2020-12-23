#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int n;
        cin >> n;
        int arr[402];
        int start = 0;
        int last = 0;
        for (int i = 0; i < n; i++){
            int sk; cin >> sk;
            arr[i] = sk;
            arr[i + n] = sk;
            if (arr[i] == 1) start = i;
            if (arr[i] == n) last = i;
        }
        if (n == 1) cout << "YES" << endl;
        else {
        bool found = false;
        bool great = false;
        int curr = start + 1;
        while (!found){
            if (arr[curr] != arr[curr-1] + 1){
                found = true;
            }
            if (arr[curr] == arr[curr-1] + 1 && arr[curr] == n){
                found = true;
                great = true;
            }
            curr++;
        }
        if (!great){
        bool found = false;
        bool great = false;
        int curr = last + 1;
        while (!found){
            if (arr[curr] != arr[curr-1] - 1){
                found = true;
            }
            if (arr[curr] == arr[curr-1] - 1 && arr[curr] == 1){
                found = true;
                great = true;
            }
            curr++;
        }
        if (!great) cout << "NO" << endl;
        else cout << "YES" << endl;
        } else cout << "YES" << endl;
        }
    }
    return 0;
}
