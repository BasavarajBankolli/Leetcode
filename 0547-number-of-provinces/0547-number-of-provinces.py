class Solution:
    def findCircleNum(self, isConnected: List[List[int]]) -> int:
        v = len(isConnected)
        adjl = [[] for _ in range(v)]

        for i in range(v):
            for j in range(v):
                if isConnected[i][j] == 1 and i != j:
                    adjl[i].append(j)
                    adjl[j].append(i)

        
        def dfs(i):
            vis[i] = 1
            for nie in adjl[i]:
                if not vis[nie]:
                    dfs(nie)


        vis = [0]*v
        cnt = 0
        for i in range(v):
            if vis[i] == 0:
                cnt += 1
                dfs(i)

        return cnt