#include "../template.h"

/*
挿入ソートの「ほとんどソートされている配列を高速でソートできる性質」を利用したもの
最悪計算量(n^2)
不安定なソート
参考: https://ufcpp.net/study/algorithm/sort_shell.html
*/

void shell_sort(V& v) {
    const ll n = v.size();

    for (ll d = 8; d >= 1; d /= 2) {
        for (ll i = 0; i < d; i++) {
            for (ll j = i; j < n; j += d) {
                for (ll k = j; k > i; k -= d) {
                    if (v[k - d] > v[k]) {
                        swap(v[k - d], v[k]);
                    } else {
                        break;
                    }
                }
            }
        }
    }
}
