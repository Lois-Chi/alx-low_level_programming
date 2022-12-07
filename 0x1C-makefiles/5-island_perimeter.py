#!/usr/bin/python3
"""Module that contains the function."""

def island_perimeter(grid):
    """Returns the perimeter of the island described in grid."""
    perimeter = 0

    rows = len(grid)

    if grid != []:
        columns = len(grid[0])

    for i in range(rows):
        for j in range(columns):
            if grid [i][j] == 1:
                 if (i - 1) == -1 or grid[i - 1][j] == 0:
                     perimeter += 1
                 if (i + 1) == rows or grid[i + 1][j] == 0:
                     perimeter += 1
                 if (j - 1) == -1 or grid[i][j - 1] == 0:
                     perimeter += 1
                 if (j + 1) == columns or grid[i][j + 1] == 0:
                     perimeter += 1
    return perimeter
