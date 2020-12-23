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
        int cntr[1050] = {0};
        for (int i = 0; i < n; i++){
            int sk;
            cin >> sk;
            a.pb(sk);
            cntr[sk]++;
        }
        int curr[1050] = {0};
        bool ansf = false;
        for (int i = 1; i <= 1024; i++){
            for (int j:a){
                int sk = j;
                sk ^= i;
                if (sk <= 1024)
                curr[sk]++;
            }
            bool same = true;
            for(int j = 0; j <= 1024; j++){
                if (cntr[j] != curr[j]){
                    same = false;
                    j = 1025;
                }
            }
            if (same){
                ats(i);
                ansf = true;
                i = 1025;
            }
            for (int j = 0; j <= 1024; j++) curr[j] = 0;
        }
        if (!ansf) ats(-1);
    }
    return 0;
}

