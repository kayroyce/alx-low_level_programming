#!/usr/bin/python3
"""island perimeter module
"""
def island_perimeter(grid):
    """perimeter function
    """ 

    k = 0
    length = len(grid) - 1
    width = len(grid[0]) - 1

    for x, r in enumerate(grid):
        for y, n in enumerate(r):
            if n == 1:
                if x == 0 or grid[x - 1][y] != 1:
                    k += 1
                if y == 0 or grid[x][y - 1] != 1:
                    k += 1
                if y == width or grid[x][y + 1] != 1:
                    k += 1
                if x == width or grid[x + 1][y] != 1:
                    k += 1

    return k
    
