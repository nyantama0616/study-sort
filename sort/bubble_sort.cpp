#include "../template.h"

/*
O(n^2)
安定
*/

void bubble_sort(V& v) {
    ll n = v.size();
    rep_rev2(i, 1, n) {
        rep(j, i) {
            if (v[j] > v[j + 1]) {
                swap(v[j], v[j + 1]);
            }
        }
    }
}
