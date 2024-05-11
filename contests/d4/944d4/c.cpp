#include <bits/stdc++.h>

using namespace std;

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif

const double PI = 3.14159265358979323846;

double hourToDegrees(int hour) {
    int offset = (12 - hour) % 12;
    return offset * 30.0;
}

pair<double, double> angleToCoordinates(double angleDegrees, double radius) {
    double angleRadians = angleDegrees * PI / 180.0;
    double x = radius * cos(angleRadians);
    double y = radius * sin(angleRadians);
    return make_pair(x, y);
}

// Calculate the orientation of ordered triplet (p, q, r)
int orientation(pair<double, double> p, pair<double, double> q, pair<double, double> r) {
    double val = (q.second - p.second) * (r.first - q.first) - (q.first - p.first) * (r.second - q.second);
    if (val == 0) return 0;  // collinear
    return (val > 0) ? 1 : 2;  // clockwise or counterclockwise
}

// Check if point q lies on segment pr
bool onSegment(pair<double, double> p, pair<double, double> q, pair<double, double> r) {
    if (q.first <= max(p.first, r.first) && q.first >= min(p.first, r.first) &&
        q.second <= max(p.second, r.second) && q.second >= min(p.second, r.second)) {
        return true;
    }
    return false;
}

// Check if two segments (p1, q1) and (p2, q2) intersect
bool segmentsIntersect(pair<double, double> p1, pair<double, double> q1, pair<double, double> p2, pair<double, double> q2) {
    int o1 = orientation(p1, q1, p2);
    int o2 = orientation(p1, q1, q2);
    int o3 = orientation(p2, q2, p1);
    int o4 = orientation(p2, q2, q1);

    // General case
    if (o1 != o2 && o3 != o4) return true;

    // Special cases
    if (o1 == 0 && onSegment(p1, p2, q1)) return true;
    if (o2 == 0 && onSegment(p1, q2, q1)) return true;
    if (o3 == 0 && onSegment(p2, p1, q2)) return true;
    if (o4 == 0 && onSegment(p2, q1, q2)) return true;

    return false;
}


void solve() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    double radius = 1.0;
    
    double angleA = hourToDegrees(a);
    double angleB = hourToDegrees(b);
    double angleC = hourToDegrees(c);
    double angleD = hourToDegrees(d);

    pair<double, double> pointA = angleToCoordinates(angleA, radius);
    pair<double, double> pointB = angleToCoordinates(angleB, radius);
    pair<double, double> pointC = angleToCoordinates(angleC, radius);
    pair<double, double> pointD = angleToCoordinates(angleD, radius); 

    if (segmentsIntersect(pointA, pointB, pointC, pointD)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
