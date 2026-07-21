class Solution:
    def shiftGrid(self, grid: List[List[int]], k: int) -> List[List[int]]:
        m = len(grid)
        n = len(grid[0])
        array = []
        for i in grid:
            array.extend(i)
        k %= (m * n)
        array = array[-k:] + array[:-k] if k else array
        r = 0
        l = 0
        new_grid = []
        for l in range(m):
            new_grid.append(array[r:n + r])
            r += n
        return new_grid

