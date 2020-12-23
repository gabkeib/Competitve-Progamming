#include <bits/stdc++.h>

using namespace std;

long long countt(long long a, int n);

int main()
{
    int n, k;
    cin >> n >> k;
    long long l = 0;
    long long r = n;
    while (l != r){
        long long add = (l + r + 1);
        long long mid = (l + r + 1)/2;
        long long result = countt(mid, n);
        if (result == k){
            l = r = mid;
        } else if (result > k){
            r = mid - 1;
        } else l = mid + 1;
    }
    cout << n - l << endl;
    return 0;
}

long long countt(long long a, int n){
    long long curr = (a*(a+1))/2;
    int left = n - a;
    return curr - left;
}
