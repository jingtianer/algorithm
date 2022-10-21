#include<vector>
#include<map>
#include<iostream>
#include<unordered_map>
#include<set>
#include<unordered_set>
using namespace std;
class Solution {
public:
    int atMostNGivenDigitSet(vector<string>& digits, int n) {
        int bit = getBit(n);
        int len = digits.size();
        int count = len*(1-pow(len, bit-1))/(1-len);
        return count;
    }
    int pow(int x, int n) {
        int res = 1;
        while(n) {
            if(n&1){
                res *= x;
            }
            n /= 2;
            x *= x;
        }
        return res;
    }
    int getBit(int n) {
        int count = 0;
        while(n) {
            count++;
            n/=10;
        }
        return count;
    }
};
int main() {
    map<int, int> m;
    for(int i = 0; i < 10; i++) {
        m[i*i] = i;
    }
    for(auto ite : m) {
        cout << ite.first << " " << ite.second << endl;
    }
    return 0;
}