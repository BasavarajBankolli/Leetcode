class Solution:
    def isBipartite(self, graph: List[List[int]]) -> bool:
        v = len(graph)
        vis = [-1]*v
        
        def dfs(node, clr):
            vis[node] = clr

            for nie in graph[node]:
                if vis[nie] == clr:
                    return False

                if vis[nie] == -1:
                    if not dfs(nie, 1-clr):
                        return False
                
            return True
     

        for node in range(v):
            if vis[node] == -1:
                if not dfs(node, 0):
                    return False

        return True
                
 