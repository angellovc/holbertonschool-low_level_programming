#!/usr/bin/python3
""" island_perimeter module """


def island_perimeter(grid):
    """ runs through the grid
    checking the perimeter of
    land numbers
    1 represent the land
    0 represent the whater around
    Args:
        grid ([double list]):
    Returns:
        [perimeter]: [land perimeter]
    """
    perimeter = 0
    for row, y in zip(grid, range(0, len(grid))):
        for x in range(0, len(row)):
            if row[x] == 1:
                perimeter = perimeter + check_perimeter(grid, x, y)
    return perimeter


def check_perimeter(grid, x, y):
    """check the perimeter of a
    given position
    1 represent land
    0 represent wather
    Args:
        grid ([list]): [list of lists]
        x ([x axis]): [x axis of the list]
        y ([y axis]): [y axis of the list]
    Returns:
        [counter]: [the total sum of each 0 around the given position]
    """
    counter = 0
    if x + 1 >= len(grid[y]) or grid[y][x + 1] == 0:
        counter += 1
    if x - 1 < 0 or grid[y][x - 1] == 0:
        counter += 1
    if y - 1 < 0 or grid[y - 1][x] == 0:
        counter += 1
    if y + 1 >= len(grid) or grid[y + 1][x] == 0:
        counter += 1
    return counter
