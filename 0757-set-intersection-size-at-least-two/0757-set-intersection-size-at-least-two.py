class Solution(object):
    def intersectionSizeTwo(self, intervals):
        res = 0
        intervals.sort(key = lambda i:(i[1],-i[0]))
        p1,p2 = -1,-1

        for l, r in intervals:
            # Case 1: both points already inside
            if l <= p1 and l <= p2:
                continue

            # Case 2: one point inside -> add 1 new point
            if l <= p2:
                res += 1
                p1 = p2
                p2 = r
                continue

            # Case 3: no points inside -> add 2 new points
            res += 2
            p1 = r - 1
            p2 = r
        return res
        