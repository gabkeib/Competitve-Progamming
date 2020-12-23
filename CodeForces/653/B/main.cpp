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
        int ans = 0;
        bool great = true;
        int mlpc = 0;
        while (n != 1){
            if (n % 6 == 0){
                n /= 6;
                mlpc = 0;
                ans++;
            } else {
                mlpc++;
                n *= 2;
                ans++;
                if (mlpc > 1){
                    great = false;
                    n = 1;
                }
            }
        }
        if (great)
        ats(ans);
        else ats(-1);
        }
    return 0;
}

