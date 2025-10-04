class Solution:
    def floodFill(self, image: List[List[int]], sr: int, sc: int, color: int) -> List[List[int]]:
        
        q = deque()
        cur = image[sr][sc]
        if cur == color:
            return image

        q.append((sr,sc))
        image[sr][sc] = color

        dirs = [(1,0), (-1,0), (0,1), (0,-1)]
        while q:
            r, c = q[0]
            q.popleft()

            for dr, dc in dirs:
                nr, nc = r + dr, c + dc

                if 0 <= nr < len(image) and 0 <= nc < len(image[0]) and image[nr][nc] == cur:
                    image[nr][nc] = color
                    q.append((nr, nc))

        return image

