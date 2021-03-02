maze = [
    "####B######################",
    "# #       #   #      #    #",
    "# # # ###### #### ####### #",
    "# # # #       #   #       #",
    "#   # # ######### # ##### #",
    "# # # #   #       #     # #",
    "### ### ### ############# #",
    "# #   #     # #           #",
    "# # #   ####### ###########",
    "# # # #       # #         C",
    "# # ##### ### # # ####### #",
    "# # #     ### # #       # #",
    "#   ##### ### # ######### #",
    "######### ### #           #",
    "# ####### ### #############",
    "A           #   ###   #   #",
    "# ############# ### # # # #",
    "# ###       # # ### # # # #",
    "# ######### # # ### # # # F",
    "#       ### # #     # # # #",
    "# ######### # ##### # # # #",
    "# #######   #       #   # #",
    "# ####### ######### #######",
    "#         #########       #",
    "#######E############D######"
]
v = []
e = []

def wall(x, y):
    return y < 0 or x < 0 or x >= len(maze[0]) or y >= len(maze) or maze[y][x] == "#";

def crawl_maze(x, y):
    if wall(x, y):
        return

    if (x, y) in v:
        return
    
    v.append( (x, y) )
        
    if maze[y][x] != " " and maze[y][x] not in exits:
        e.append(maze[y][x])

    crawl_maze(x, y+1)
    crawl_maze(x, y-1)
    crawl_maze(x+1, y)
    crawl_maze(x-1, y)

def print_maze():
    print("\n     ", end='')
    for i in range(len(maze[0])):
        print(i % 10, end='')
    print()

    for index, line in enumerate(maze):
        print(" {:3d} {}".format(index, line))
    print()

# print_maze()

x, y = map(int, input("Введите координаты x, y через пробел: ").split())
crawl_maze(x, y)

if wall(x, y):
    print("Неверные координаты")
else:
    for exit in e:
        print(exit, end=' ')
    print()