class Solution(object):
    def numberOfWays(self, corridor):
        """
        :type corridor: str
        :rtype: int
        """
        mod = 10**9 + 7
        seat = 0
        way = 1
        plant = 0
        for ch in corridor:
            if ch == 'S':
                seat += 1
                if(seat>2 and seat%2 == 0):
                    way = (way*(plant +1))%mod
                    plant = 0
            else:
                if seat>=2 and seat%2 ==0:
                    plant +=1
        return way if seat % 2 == 0 and seat > 0 else 0
