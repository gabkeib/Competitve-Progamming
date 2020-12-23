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
        if (n == 1) ats(0);
        else {
        sort(adj.begin(), adj.end());
        int maxsame = 1;
        int maxnum = adj[0];
        int curr = 1;
        for (int i = 0; i < n - 1; i++){
            while (adj[i] == adj[i + 1] && i + 1 < n){
                curr++;
                if (curr > maxsame){
                    maxsame = curr;
                    maxnum = adj[i];
                }
                if (i + 1 < n)
                i++;
            }
            if (curr > 1) {
                i--;
                curr = 1;
            }
        }
        set <int> s;
        for (int i = 0; i < n; i++){
            if (adj[i] != maxnum) s.insert(adj[i]);
        }
        if (maxsame > s.size()){
            if (maxsame - s.size() > 1) ats(s.size() + 1);
            else ats(s.size());
        } else if (maxsame == s.size()){
            ats(maxsame);
        } else ats(maxsame);
        }
    }
    return 0;
}

