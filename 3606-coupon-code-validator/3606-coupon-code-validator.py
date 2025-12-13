class Solution(object):
    def validateCoupons(self, code, businessLine, isActive):
        """
        :type code: List[str]
        :type businessLine: List[str]
        :type isActive: List[bool]
        :rtype: List[str]
        """
        allowed = {
            "electronics": 0,
            "grocery": 1,
            "pharmacy": 2,
            "restaurant": 3
        }
        ans = []
        for i in range(len(code)):
            if not isActive[i]:
                continue
            if businessLine[i] not in allowed:
                continue
            valid = True
            if not code[i]:
                continue
            for ch in code[i]:
                if not (
                    'a' <= ch <= 'z' or
                    'A' <= ch <= 'Z' or
                    '0' <= ch <= '9' or
                    ch == '_'):
                    valid = False
            if valid:
                ans.append((allowed[businessLine[i]], code[i]))
                ans.sort()

        return [a for _,a in ans]
    
        