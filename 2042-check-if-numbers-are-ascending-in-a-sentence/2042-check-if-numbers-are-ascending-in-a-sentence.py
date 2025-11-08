class Solution(object):
    def areNumbersAscending(self, s):
        """
        :type s: str
        :rtype: bool
        """
        s = s.split()
        numbers = []

        for i in s:
            if i.isdigit():
                numbers.append(int(i))
        for i in range(1,len(numbers)):
            if(numbers[i]<=numbers[i-1]):
                return False

        return True
        
        