from typing import List, Tuple, Dict
class Solution:
    def findLongestWord(self, s: str, dictionary: List[str]) -> str:
        m = len(s)
        f = [[0] * 26 for _ in range(m)]
        f.append([m] * 26)
        print([chr(ord('a')+i) for i in range(26)])
        for i in range(m - 1, -1, -1):
            print('[', end='')
            for j in range(26):
                if ord(s[i]) == j + 97:
                    f[i][j] = i
                else:
                    f[i][j] = f[i + 1][j]
                print("'{}', ".format(f[i][j]), end='')
            print()
        res = ""
        for t in dictionary:
            match = True
            j = 0
            for i in range(len(t)):
                if f[j][ord(t[i]) - 97] == m:
                    match = False
                    break
                j = f[j][ord(t[i]) - 97] + 1
            if match:
                if len(t) > len(res) or (len(t) == len(res) and t < res):
                    res = t
        return res

print(Solution().findLongestWord("abpcplea", ["ale","apple","monkey","plea"]))
