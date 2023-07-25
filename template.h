#pragma once
#include <bits/stdc++.h>

using namespace std;

using ll = int64_t;
using ull = unsigned long long;
using ld = long double;
using P = pair<ll,ll>;
using V = vector<ll>;
using M = vector<vector<ll>>;

#define rep(i, n) for (ll i = 0; i < static_cast<ll>(n); ++i)
#define rep_rev(i, n) for (ll i = n - 1; i >= 0; --i)
#define rep2(i, a, b) for (ll i = a; i < static_cast<ll>(b); ++i)
#define rep_rev2(i, a, b) for (ll i = b - 1; i >= a; --i)
#define all(v) (v).begin(), (v).end()
#define bit(n,k) (((n)>>(k))&1)
#define isin(x, l, r) (l <= (x) && (x) < r)
#define dx4 {-1, 0, 1, 0}
#define dy4 {0, 1, 0, -1}
#define dx8 {-1, -1, 0, 1, 1, 1, 0, -1}
#define dy8 {0, 1, 1, 1, 0, -1, -1, -1}
#define length(a) static_cast<ll>(a.size())
#define get(x, i) get<i>(x)
#define sign(x) ((x == 0) ? 0 : (x) / abs(x))
#define ndigits(x) static_cast<ll>(floor(log10(x)) + 1)
#define deg2rad(x) ((x) * M_PI / 180)
#define rad2deg(x) ((x) * 180 / M_PI)
#define log(x, y) (log(y) / log(x))
#define scanvar(T, x) T x; cin >> x
#define scanll(x) ll x; cin >> x
#define scanv(T, v, n) vector<T> v; for (int i = 0; i < n; ++i) { T temp; cin >> temp; (v).push_back(temp); }
#define scanvs(v) vector<char> v; do { scanvar(string, temp); for (char c : temp) {v.push_back(c); } } while (false)
#define scanm(T, m, a, b) vector<vector<T>> m(a, vector<T>(b)); rep(i, a) { rep(j, b) { cin >> m[i][j]; } }
#define scanms(m, a, b) vector<vector<char>> m(a, vector<char>(b)); rep(i,a) { scanvar(string, temp); rep(j, b) { m[i][j] = temp[j]; } }
#define pl(x) cout << (x) << endl
#define printld(x) printf("%.12Lf\n", x)
#define printv(v) for (auto __x: v) {cout << __x << " ";} cout << endl;
#define printm(m) for (auto __v : m) { printv(__v); }
