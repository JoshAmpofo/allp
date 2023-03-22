#!/usr/bin/python3
"""Solve for the perimeter of a an island grid"""


def island_perimeter(grid):
    """Calculates the perimeter of an island described in a grid

    Args:
        grid (list of list of integers): grid repr of island

    Return:
        int: perimeter of the island
    """
    # initialize perimeter variables
    width = len(grid[0])
    height = len(grid)
    perimeter = 0
    size = 0

    # Loop through each cell in the grid
    for i in range(height):
        for j in range(width):
            # if cell is land
            if grid[i][j] == 1:
                size += 1
                # loop through up, left, right, and down of current cell
                if (j > 0 and grid[i][j - 1] == 1):
                    perimeter += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    perimeter += 1
    return size * 4 - perimeter * 2
