#!/usr/bin/python3
"""
Defines a function that returns
the perimeter of the island described in grid.
"""


def island_perimeter(grid):
    """
    Function calculates the perimeter of the island described in grid
    Args:
        grid: is a list of list of integers 0 is water zone and 1 is land zone
    returns:
        perimeter after Iterating through each cell in the grid
    """
    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                # UP
                if 1 == 0 or grid[i - 1][j] == 0:
                    perimeter += 1
                # DOWN
                if i == len(grid) - 1 or grid[i + 1][j] == 0:
                    perimeter += 1
                # LEFT
                if j == 0 or grid[i][j - 1] == 0:
                    perimeter += 1
                # RIGHT
                if j == len(grid[0]) - 1 or grid[i][j + 1] == 0:
                    perimeter += 1
    return perimeter
