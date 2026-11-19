class Solution:
    def singleNumber(self, n: list[int]) -> int:
       for i in n:
           c=0
           for j in n:

             if i==j:
                c += 1
           if c==1:
              return i
            