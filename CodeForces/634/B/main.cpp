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
        int n, a, b;
        cin >> n >> a >> b;
        int pos = 0;
        string ans = "";
        char c = 'a';
        int curr = 0;
        while (pos < n){
            while (curr < b && pos < n){
                ans += c;
                c++;
                curr++;
                pos++;
            }
            curr = 0;
            c = 'a';
        }
        ats(ans);
    }
    return 0;
}

