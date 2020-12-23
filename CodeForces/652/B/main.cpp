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
        string s;
        cin >> s;
        for (int i = n - 1; i >= 0; i--){
            if (s[i] == 0){
                int cnt0 = 0;
                int cnt1 = 0;
                while (s[i] == 0 && i >= 0){
                    cnt++;
                    i--;
                }
                while (s[i] == 1 && i >= 0){

                }
            }
        }

    }
    return 0;
}

