class Solution(object):
    def judgeCircle(self, moves):
        """
        :type moves: str
        :rtype: bool
        """
        r = 0
        l = 0
        u = 0
        d = 0
        for i in range(len(moves)):
            if moves[i] == "U":
                u +=1
            elif moves[i] == "D":
                d += 1
            elif moves[i] == "R":
                r += 1
            else:
                l +=1
        if r == l and u ==d:
            return True
        return False