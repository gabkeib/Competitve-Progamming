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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        deque <int> start;
        deque <int> ends;
        deque <int> ones;
        for (int i = 0; i < n; i++){
            if (s[i] == '1'){
                int st = max(i - k, 0);
                int ed = min(i + k, n - 1);
                start.pb(st);
                ends.pb(ed);
                ones.pb(i);
            }
        }
       /* cout << "start: ";
        for (int x:start){
            cout << x << " ";
        }
        cout << endl;
        cout << "end: ";
        for (int x:ends){
            cout << x << " ";
        }
        cout << endl;*/
        int ans = 0;
        for (int i = 0; i < n; i++){
            if (start.front() != i){
                if (i + k < ones.front()){
                    ans++;
                    int pl = min(i + k, n - 1);
                    i = pl;
                } else {
                    start.pop_front();
                    i = ends.front();
                    ends.pop_front();
                    ones.pop_front();
                }
            } else {
                start.pop_front();
                i = ends.front();
                ends.pop_front();
                ones.front();
            }
        }
        ats(ans);
    }
    return 0;
}

