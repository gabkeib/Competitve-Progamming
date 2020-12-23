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
        vi a;
        int odd = 0;
        int even = 0;
        for (int i = 0; i < n; i++){
            int sk;
            cin >> sk;
            a.pb(sk);
            if (sk % 2 == 1) odd++;
            else even++;
        }
        if ((n % 2 == 0 && odd != even) || (n % 2 == 1 && even != odd + 1)) ats(-1);
        else {
            int ans = 0;
            for (int i = 0; i < n; i++){
                if (i % 2 == 0){
                    if (a[i] % 2 == 1) ans++;
                } else {
                    if (a[i] % 2 == 0) ans++;
                }
            }
            ats(ans / 2);
        }
    }
    return 0;
}

