class Solution(object):
    def addToArrayForm(self, num, k):
        """
        :type num: List[int]
        :type k: int
        :rtype: List[int]
        """
        res = []
        i = len(num) - 1
        carry = k

        # Add digits from the end of num with the value k (in carry)
        while i >= 0 or carry:
            if i >= 0:
                carry += num[i]
                i -= 1
            res.append(carry % 10)
            carry //= 10

        # res currently holds digits in reverse order
        return res[::-1]