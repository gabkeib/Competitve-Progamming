#include <bits/stdc++.h>

using namespace std;

priority_queue <int> pq;
int cnt[200001] = {0};
int arr[200001];

int main()
{
    int n, k;
    cin >> n >> k;
    long long steps = 0;
    bool found = false;
    for (int i = 0; i < n; i++){
        int a;
        cin >> a;
        arr[i] = a;
        cnt[a]++;
        if (cnt[a] == k) found = true;
        pq.push(a);
    }
    if (found) cout << 0 << endl;
    else {
        int save = 0;
        while (!found){
            int sk = pq.top();
            pq.pop();
            cnt[sk]--;
            sk /= 2;
            cnt[sk]++;
            if (cnt[sk] == k) {
                found = true;
                save = sk;
            }
            steps++;
            pq.push(sk);
        }
        multiset <int> ms;
        for (int i = 0; i < n; i++){

        }
        cout << steps << endl;
    }
    return 0;
}
