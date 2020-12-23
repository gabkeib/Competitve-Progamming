#include <bits/stdc++.h>

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main()
{
    FAST_IO;
    int q;
    cin >> q;
    for (int i = 0; i < q; i++){
        int n;
        cin >> n;
        deque <long long> arr;
        set <int> s;
        int cnt[10001] = {0};
        bool great = false;
        for (int j = 0; j < 4*n; j++){
            long long sk;
            cin >> sk;
            cnt[sk]++;
            if (cnt[sk] % 2 == 1) great = false;
            else {
                great = true;
                arr.push_back(sk);
            }
            s.insert(sk);
        }
        for (int i:s) if (cnt[i] % 2 != 0) great = false;
        sort(arr.begin(), arr.end());
        if (arr.size() % 2 != 0) great = false;
        if (!great) cout << "NO" << endl;
        else {
            //for (int i:arr) cout << i << endl;
            int t = arr.size();
            long long req = arr[0] * arr[t-1];
            bool same = true;
            for (int i = 1 ; i < (t / 2); i++){
                long long eq = arr[i] * arr[t-1-i];
                if (eq != req) same = false;
            }
            if (same) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}
