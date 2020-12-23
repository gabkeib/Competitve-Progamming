#include <bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ws(x) cerr << #x << " is " << x << endl
#define pb(x) push_back(x)
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

int r1[200001] = {0};
int r2[200001] = {0};
int l1[200001] = {0};
int l2[200001] = {0};

int main()
{
    FAST_IO;
    int t;
    cin >> t;
    for (int x = 0; x < t; x++){
        int n;
        cin >> n;
        vi a;
        int mx = 0;
        int pos = 0;
        vii ans;
        for (int i = 0; i < n; i++){
            int sk;
            cin >> sk;
            a.pb(sk);
            if(sk > mx){
                mx = sk;
            }
            r1[i] = 0;
            r2[i] = 0;
            l1[i] = 0;
            l2[i] = 0;
        }
        bool g1 = true;
        bool g2 = true;
        for (int i = 0; i < mx; i++){
            int sk = a[i];
            l1[sk]++;
        }
        for (int i = 1; i <= mx; i++){
            if (l1[i] == 0 || l1[i] > 1) g1 = false;
        }
        for (int i = mx; i < n; i++){
            int sk = a[i];
            r1[sk]++;
        }
        for (int i = 1; i <= n - mx; i++){
            if (r1[i] == 0 || r1[i] > 1) g1 = false;
        }
        if (g1) ans.push_back({mx, n - mx});
        for (int i = 0; i < n - mx; i++){
            int sk = a[i];
            l2[sk]++;
        }
        for (int i = 1; i <= n - mx; i++){
            if (l2[i] == 0 || l2[i] > 1) g2 = false;
        }
        for (int i = n - mx; i < n; i++){
            int sk = a[i];
            r2[sk]++;
        }
        for (int i = 1; i <= mx; i++){
            if (r2[i] == 0 || r2[i] > 1) g2 = false;
        }
        if (g2 && n - mx != (n - (n - mx))) ans.push_back({n - mx, n - (n - mx)});
        ats(ans.size());
        for (pii x:ans){
            cout << x.first << " " << x.second << "\n";
        }
    }
    return 0;
}

