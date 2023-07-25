#include "../template.h"

/*
O(n^2)
不安定
*/

void select_sort(V& v) {
    ll n = v.size();
    rep(i, n - 1) {
        ll pos = i;
        ll minValue = v[i];
        rep2(j, i + 1, n) {
            if (v[j] < minValue) {
                pos = j;
                minValue = v[j];
            }
        }
        swap(v[i], v[pos]);
    }
}
