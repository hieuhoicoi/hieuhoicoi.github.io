#include <bits/stdc++.h>
using namespace std;
#define int long long
    int a[(int)1e6+5];
int32_t main()
{
    int n;
    cin >> n;
    for(int i=1;i<=n;i++) cin >> a[i];
    int sum=0;
    for(auto i:a){
        if (i%2==1) sum+=i;
    }
    cout << sum;
}
