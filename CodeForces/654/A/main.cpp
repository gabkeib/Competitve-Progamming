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
        if (n == 1) ats(1);
        else if (n == 2) ats(1);
        else if (n == 3) ats(2);
        else {
            if (n % 2 == 1) n++;
            ats(n/2);
        }
    }
    return 0;
}

