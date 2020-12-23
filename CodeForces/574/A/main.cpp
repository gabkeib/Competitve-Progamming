#include <bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ws(x) cerr << #x << " is " << x << endl;
#define pb(x) push_back(x)
#define ats(x) cout << x << "\n";

typedef long long ll;
typedef vector<int> vi;
typedef pair <int, int> pii;
typedef vector<pii> vii;

const int INF = INT_MAX;


int main()
{
    FAST_IO;
    int n, k;
    cin >> n >> k;
    int am[1001] = {0};
    for (int i = 0; i < n; i++){
        int sk;
        cin >> sk;
        am[sk]++;
    }
    int ans = 0;
    int left = n/2;
    if (n%2==1) left++;
    priority_queue <int> pq;
    for (int i = 1; i <= k; i++){
        pq.push(am[i]);
    }
    while (left > 0){
        int sk = pq.top();
        pq.pop();
        if (sk != 1){
            int pos = sk/2;
            if (pos <= left){
                left -= pos;
                ans += 2*pos;
                sk -= 2*pos;
            } else {
                ans += left*2;
                sk -= 2*pos;
                left = 0;
            }
            if (sk > 0) pq.push(sk);
        } else {
            left--;
            ans++;
        }
    }
    ats(ans);
    return 0;
}

