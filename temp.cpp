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
    string s = "1043672911";
    for(char c: s) {
        cout << char(c-'0'+'A');
    }
    return 0;
}