#!/usr/bin/python3
""" Perimeter of the island method """


def island_perimeter(grid):
    """ Returns the perimeter of the island """
    count = 0
    for m in range(len(grid)):
        for n in range(len(grid[m])):
            if grid[m][n] == 1:
                if m - 1 < 0 or grid[m - 1][n] == 0:
                    count += 1
                if n + 1 > (len(grid[m]) - 1) or grid[m][n + 1] == 0:
                    count += 1
                if m + 1 > (len(grid) - 1) or grid[m + 1][n] == 0:
                    count += 1
                if n - 1 < 0 or grid[m][n - 1] == 0:
                    count += 1
    return count
