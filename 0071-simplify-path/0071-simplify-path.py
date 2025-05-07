class Solution:
    def simplifyPath(self, path: str) -> str:
        
        lst = path[1:].split('/')
        st = []
        for s in lst:
            if s and s != '.':
                if s == '..':
                    if st:
                        st.pop()
                else:
                    st.append(s)

        return '/' + '/'.join(st)

        
        

