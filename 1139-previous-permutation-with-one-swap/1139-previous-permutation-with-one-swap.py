class Solution:
    def prevPermOpt1(self, arr: List[int]) -> List[int]:
        mx_at = -1

        for i in range(len(arr)-2,-1,-1):
            if arr[i] > arr[i+1]:
                mx_at = i
                break

        if mx_at == -1:
            return arr
            
        swap = mx_at + 1
        for i in range(swap, len(arr)):
            if arr[i] < arr[mx_at] and arr[i] > arr[swap]:
                swap = i

        arr[swap], arr[mx_at] = arr[mx_at], arr[swap]

        return arr
            
            
