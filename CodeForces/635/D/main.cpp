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

bool sortt(pair <ll, char> a, pair <ll, char> b){
    return a.first < b.first;
}

ll cnt(ll x, ll y, ll z){
    return ((x - y)*(x - y) + (y - z)*(y - z)+ (z - x)*(z - x));
}

int main()
{
    FAST_IO;
    int t;
    cin >> t;
    while (t--){
        int r, g, b;
        vector <pair <ll, char>> adj;
        cin >> r >> g >> b;
        for (int i = 0; i < r; i++){
            ll sk;
            cin >> sk;
            adj.pb({sk, 'r'});
        }
         for (int i = 0; i < g; i++){
            ll sk;
            cin >> sk;
            adj.pb({sk, 'g'});
        }
         for (int i = 0; i < b; i++){
            ll sk;
            cin >> sk;
            adj.pb({sk, 'b'});
        }
        sort(adj.begin(), adj.end(), sortt);
        ll rsk = INF;
        ll bsk = INF;
        ll gsk = INF;
        int x = 0;
        while (rsk == INF || gsk == INF || bsk == INF){
            ll val = adj[x].fi;
            char col = adj[x].se;
            if (col == 'r'){
                rsk = val;
            }
             if (col == 'g'){
                gsk = val;
            }
             if (col == 'b'){
                bsk = val;
            }
            x++;
        }
        ll ans = cnt(rsk, gsk, bsk);
        cout << "first: " << rsk << " " << gsk << " " << bsk << " " << " " << ans << "\n";

        for (int i = x; i < adj.size(); i++){
            int val = adj[i].fi;
            char col = adj[i].se;
           // cout << val << " " << col << endl;
            if (col == 'r'){
                rsk = val;
            }
             if (col == 'g'){
                gsk = val;
            }
             if (col == 'b'){
                bsk = val;
            }
            ans = min(ans, cnt(rsk, gsk, bsk));
        }
        ats(ans);
        adj.clear();
    }
    return 0;
}

