#!/usr/bin/python3
""" create a function def island_perimeter(grid) """

def island_perimeter(grid):
    """return the perimeter in the grid for the island in question"""
    height = len(grid)
    width = len(grid[0])
    size = 0
    edges = 0

    for idx in range(height):
        for jdx in range(width):
            if grid[idx][jdx] == 1:
                size += 1
                if (jdx > 0 and grid[idx][jdx - 1] == 1):
                    edges += 1
                if (idx > 0 and grid[idx - 1][jdx] == 1):
                    edges += 1
    return ((size * 4) - (edges * 2))

