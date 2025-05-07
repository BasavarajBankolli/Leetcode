class Solution:
    def simplifyPath(self, path: str) -> str:
        
        lst = path.split('/')
        st = []
        
        for s in lst:
            if s == '..':
                if st: st.pop()
            elif s and s != '.': st.append(s)

        return '/' + '/'.join(st)

        
        

