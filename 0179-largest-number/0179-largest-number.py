class Solution:
    def largestNumber(self, nums: List[int]) -> str:
        
        def cmp(a,b):
            if a+b > b+a:      # 31 + 3 > 3 + 31
                return -1
            return a+b < b+a    # 31 + 3 < 3 + 31

        ref = [str(v) for v in nums]
        ref.sort(key=cmp_to_key(cmp))

        if ref[0] == '0':
            return '0'

        return "".join(ref)


