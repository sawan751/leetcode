from math import gcd
from collections import Counter

class Solution:
    def hasGroupsSizeX(self, deck: List[int]) -> bool:
        count = Counter(deck)
        
        g = 0
        for freq in count.values():
            g = gcd(g, freq)
        
        return g >= 2