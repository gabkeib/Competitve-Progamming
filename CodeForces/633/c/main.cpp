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
        int n;
        cin >> n;
        vi adj;
        for (int i = 0; i < n; i++){
            int sk;
            cin >> sk;
            adj.pb(sk);
        }
        int maxdif = 0;
        int maxnum = adj[0];
        for (int i = 0; i < n - 1; i++){
            maxdif = max(max(maxdif, maxnum - adj[i]), adj[i] - adj[i + 1]);
            maxnum = max(maxnum, adj[i]);
        }
        maxdif = max(maxdif, maxnum - adj[n - 1]);
        int sum = 0;
        if (maxdif >= 1){
            int curr = 1;
            int t = 1;
            sum = 1;
            while (sum < maxdif){
                curr *= 2;
                sum += curr;
                t++;
            }
            ats(t);
        } else ats(0);
    }
    return 0;
}

