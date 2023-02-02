#include <bits/stdc++.h>
using namespace std;
#define ll long long


ll ind_pos(ll n, ll pos)
{
    ll i = 1;
    while (n > 0)
    {
        ll tmp = n % 10;
        if (i == pos)
            return tmp;
        n /= 10;
        ++i;
    }
    return 0;
}

int main() {
    ll q;
    cin >> q;
    while (q--)
    {
        ll n;
        cin >> n;
        ll digs = 1, curr = 0, c = 1;

        while (n > digs * 9 * c)
        {
            n -= digs * 9 * c;
            digs++;
            curr = curr * 10 + 9;
            c *= 10;
        }

        ll tmp1 = n / digs;
        curr += tmp1;
        ll tmp2 = n % digs;

        if (tmp2 == 0)
            cout << ind_pos(curr, 1);
        else
            cout << ind_pos(curr + 1, digs - tmp2 + 1);
        cout << endl;
    }
    return 0;
}