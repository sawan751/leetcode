class Solution:
    def isValid(self, s: str) -> bool:
        
        op = ["(","[","{"]
        cl = [")","]","}"]
        stack = []
        if(len(s)%2 != 0):
            return False
        if s[0] in cl or s[-1] in op:
            return False

        for i in range(len(s)):
            if s[i] in op:
                stack.append(s[i])
            else:
                if s[i] == cl[0]:
                    if stack[-1] != op[0]:
                        return False
                    else:
                        stack.pop()
                if s[i] == cl[1]:
                    if stack[-1] != op[1]:
                        return False
                    else:
                        stack.pop()
                if s[i] == cl[2]:
                    if stack[-1] != op[2]:
                        return False
                    else:
                        stack.pop()
        print(len(stack))
        if(len(stack) == 0):
            return True
        else:
            return False
