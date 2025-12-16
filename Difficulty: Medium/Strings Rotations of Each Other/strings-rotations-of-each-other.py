class Solution:
    def areRotations(self, s1, s2):
        # code here
        s=s2*2
        if s1 in s:
            return True
        return False