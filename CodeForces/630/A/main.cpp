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

bool check(int x, int y, int x1, int y1, int x2, int y2){
    return (x <= x2 && x >= x1 && y <= y2 && y >= y1);
}

int main()
{
    FAST_IO;
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int l, r, d, u;
        cin >> l >> r >> d >> u;
        int x, y, x1, y1, x2, y2;
        cin >> x >> y >> x1 >> y1 >> x2 >> y2;
        bool great = false;
        int xa = r - l;
        int ya = u - d;
        if (x + xa <= x2 && x + xa >= x1 && y + ya <= y2 && y + ya >= y1) great = true;
        else great = false;
        bool le, re, dw, up;
        le = re = dw = up = true;
        if (l > 0 && (x - 1 > x2 || x - 1 < x1)) le = false;
        if (r > 0 && (x + 1 > x2 || x + 1 < x1)) re = false;
        if (d > 0 && (y - 1 > y2 || y - 1 < y1)) dw = false;
        if (u > 0 && (y + 1 > y2 || y + 1 < y1)) up = false;
        if (!re && !le) great = false;
        if (!dw && !up) great = false;
        if (great) ats("Yes");
        else ats("No");

    }
    return 0;
}

