#include<bits/stdc++.h>
#include<iostream>

using namespace std;

template<class T>
ostream& operator<<(ostream& o, const vector<T>& t) {
    int n = t.size();
    o << "{";
    for(int i = 0; i < n-1; ++i) {
        o << t[i] << ", ";
    }
    if(n > 0) {
        o << t[n-1];
    }
    o << "}" << endl;
    return o;
}

int main() {
    vector a(4,3);
    vector b{4,3};
    vector c = {4,2};
    vector<int> d = {4,1};
    cout << a << b << c << d << vector<int>();
    return 0;
}