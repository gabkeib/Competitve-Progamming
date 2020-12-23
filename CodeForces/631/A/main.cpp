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


int main()
{
    FAST_IO;
    int t;
    cin >> t;
    for (int j = 0; j < t; j++){
        int cnt[210] = {0};
        int n, x;
        cin >> n >> x;
        for (int i = 0; i < n; i++){
            int sk;
            cin >> sk;
            cnt[sk]++;
        }
        int pr = 1;
        while (x > 0){
            if (cnt[pr] == 0) {
                x--;
                if (x > 0) pr++;
            }
            else pr++;
        }
        bool added = false;
        while (cnt[pr + 1] > 0){
            pr++;
            added = true;
        }
        ats(pr);
    }
    return 0;
}

