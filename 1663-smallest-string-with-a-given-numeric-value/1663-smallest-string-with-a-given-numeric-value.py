class Solution:
    def getSmallestString(self, n: int, k: int) -> str:
        l=[]
        count=0
        for i in range(n):
            if k-26>((n-2)-i):
                l.append(chr(26+96))
                k=k-26
            else:
                l.append(chr(k-(n-1-i)+96))
                break
        while len(l)!=n:
            l.append(chr(97))
        return ("".join(l))[::-1]