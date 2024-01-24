#!/usr/bin/python3
""" calculate island permiter based on grid """


def island_perimeter(grid=[[]]):
    """
    island_perimeter - calculate island perimeter represented on a grid
    1 represents land, 0 presents water
    Args:   grid(list of lists)
    Return: perimeter of land
    """
    len_1 = len(grid)
    if len_1 <= 1:
        return 0
    len_2 = len(grid[0])
    if len_2 <= 1:
        return 0
    perimeter = 0
    for i in range(len_1):
        for j in range(len_2):
            pin = 0
            if grid[i][j] == 1:
                if j > 0:
                    pin += grid[i][j-1]
                if j < len_2 - 1:
                    pin += grid[i][j+1]
                if i > 0:
                    pin += grid[i-1][j]
                if j < len_1 - 1:
                    pin += grid[i+1][j]
                perimeter = perimeter + (4-pin)
    return perimeter

