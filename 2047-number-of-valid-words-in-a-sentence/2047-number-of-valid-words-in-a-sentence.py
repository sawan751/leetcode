class Solution(object):
    def countValidWords(self, sentence):
        """
        :type sentence: str
        :rtype: int
        """
        def isvalid(word):
            hyphen = 0
            for i,ch in enumerate(word):
                if ch.isdigit():
                    return False
                if ch in "!,.":
                    if i != len(word)-1:
                        return False
                elif ch == '-':
                    hyphen +=1
                    if hyphen >1:
                        return False

                    if i == 0 or i == len(word)-1:
                        return False
                    if not word[i-1].isalpha() or not word[i+1].isalpha():
                        return False
                elif not ch.isalpha():
                    return False

            return True

        count = 0
        lis = list(sentence.split())
        for x in lis:
            if(isvalid(x)):
                count += 1
        return count