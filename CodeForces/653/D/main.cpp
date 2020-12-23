#include <bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ws(x) cerr << #x << " is " << x << endl
#define pb push_back
#define ats(x) cout << x << "\n"
#define all(x) (x).begin(), (x).end()
#define fi first
#define se second

typedef long long ll;
typedef vector<int> vi;
typedef pair <int, int> pii;
typedef vector<pii> vii;
typedef tuple<int, int, int> tiii;

const int INF = INT_MAX;

int main()
{
    FAST_IO;
    int t;
    cin >> t;
    while (t--){
        int n; ll k;
        cin >> n >> k;
        ll x = 0LL;
        priority_queue <ll, vector<ll>,  greater<ll>> pq;
        map <ll, bool> mp;
        map <ll, ll> mlp;
        for (int i = 0; i < n; i++){
            ll sk;
            cin >> sk;
            ll mod = sk % k;
            if (mod != 0){
                ll pt = k - mod;
                if (mp[pt] == 1){
                    pt += mlp[pt]*k;
                    ll multi = mlp[pt];
                    while (mp[pt] == 1){
                        multi++;
                        pt += k;
                    }
                    mp[pt] = 1;
                    mlp[pt] = multi;
                } else {
                    mp[pt] = 1;
                    mlp[pt] = 0;
                }
            pq.push(pt);
            }
        }
        ll ans = 0LL;
        while (!pq.empty()){
            ll sk = pq.top();
            pq.pop();
            ans += (sk - x) + 1LL;
            x = sk + 1;
        }
        ats(ans);
    }
    return 0;
}

