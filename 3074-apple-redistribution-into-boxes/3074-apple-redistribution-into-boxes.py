class Solution(object):
    def minimumBoxes(self, apple, capacity):
        """
        :type apple: List[int]
        :type capacity: List[int]
        :rtype: int
        """
        s = sum(apple)
        capacity.sort(reverse= True)

        count = 0
        cap = 0
        for i in capacity:
            count +=1
            cap += i
            if cap>= s:
                return count
        return count