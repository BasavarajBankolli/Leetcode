class Solution:
    def areaOfMaxDiagonal(self, dimensions: List[List[int]]) -> int:
        mxArea = 0
        d = 0

        for l, b in dimensions:
            diag = l*l + b*b

            if diag > d:
                mxArea = l*b
                d = diag
            
            elif diag == d:
                mxArea = max(mxArea, l*b) 

        return mxArea