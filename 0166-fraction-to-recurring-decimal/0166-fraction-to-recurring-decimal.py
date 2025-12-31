class Solution(object):
    def fractionToDecimal(self, numerator, denominator):
        if numerator == 0:
            return "0"
        
        res = []

        if ((denominator<0) ^ (numerator<0)):
            res.append("-")
        numerator, denominator = abs(numerator), abs(denominator)
        res.append(str(numerator//denominator))
        reminder = numerator%denominator 

        if reminder == 0:
            return ''.join(res)
        
        res.append(".")

        dic = {}

        while reminder!= 0:
            if reminder in dic:
                indx = dic[reminder]
                res.insert(indx,"(")
                res.append(")")
                break
            dic[reminder] = len(res)
            reminder *=10
            res.append(str(reminder//denominator))
            reminder %=denominator
        return "".join(res)

        