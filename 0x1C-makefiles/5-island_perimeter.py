#!/usr/bin/python3
""" create a function def island_perimeter(grid) """

def island_perimeter(grid):
    """return the perimeter in the grid for the island in question"""
    heightt = len(grid)
    breath = len(grid[0])
    sizes = 0
    edges = 0

    for idx in range(heightt):
        for jdx in range(breath):
            if grid[idx][jdx] == 1:
                sizes += 1
                if (jdx > 0 and grid[idx][jdx - 1] == 1):
                    edges += 1
                if (idx > 0 and grid[idx - 1][jdx] == 1):
                    edges += 1
    return ((sizes * 4) - (edges * 2))

