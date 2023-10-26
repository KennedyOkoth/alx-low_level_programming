#!/usr/bin/python3
"""Defines an island perimeter measuring function."""


def island_perimeter(grid):
    """Return the perimiter of an island.
    The grid represents water by 0 and land by 1.
    Args:
        grid (list): A list of list of integers representing an island.
    Returns:
        The perimeter of the island defined in grid.
    """
    width = len(grid[0])
    height = len(grid)
    x = 0
    y = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                y += 1
                if j > 0 and grid[i][j - 1] == 1:
                    x += 1
                if i > 0 and grid[i - 1][j] == 1:
                    x += 1
    return y * 4 - x * 2


if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    print(island_perimeter(grid))
