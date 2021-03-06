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
        int n, k;
        cin >> n >> k;
        vi adj;
        vi ans;
        for (int i = 0; i < n; i++){
            int sk;
            cin >> sk;
            adj.pb(sk);
        }
        int maxc = 0;
        for (int i = 0; i < k; i++){
            maxc += adj[i];
        }
        int curr = maxc;
        for (int i = k; i++){
            curr -= adj[i - k];
            curr += adj[i];
            maxc = max(maxc, curr);
        }
    }
    return 0;
}

