def min_path(path: list) -> list:

    def map_value(move: str) -> int:
        if move == "UP":
            return 1
        elif move == "DOWN":
            return -1
        elif move == "RIGHT":
            return 2
        elif move == "LEFT":
            return -2

    i = 0
    while True:
        if i + 1 == len(path):
            break
        if not map_value(path[i]) + map_value(path[i + 1]):
            path.pop(i + 1)
            path.pop(i)
            i = 0
            continue
        i += 1
    return path

print(min_path(['UP', 'DOWN', 'UP', 'LEFT', 'RIGHT']))



