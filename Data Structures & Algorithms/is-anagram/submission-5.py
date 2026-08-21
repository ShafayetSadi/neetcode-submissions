class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        
        dtS, dtT = {}, {}

        for i in range(len(s)):
            if s[i] in dtS:
                dtS[s[i]] += 1
            else:
                dtS[s[i]] = 1

            if t[i] in dtT:
                dtT[t[i]] += 1
            else:
                dtT[t[i]] = 1

        return dtS == dtT