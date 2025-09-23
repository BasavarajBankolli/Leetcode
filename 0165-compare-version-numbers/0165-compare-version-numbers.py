class Solution:
    def compareVersion(self, version1: str, version2: str) -> int:
        a = version1.split('.')
        b = version2.split('.')

        n,m = len(a), len(b)

        if n > m:
            b.extend(['0']*(n-m))
        
        elif m > n:
            a.extend(['0']*(m-n))


        for i in range(min(len(a), len(b))):
            
            if int(a[i]) > int(b[i]):
                return 1

            elif int(b[i]) > int(a[i]):
                return -1

        
        return 0