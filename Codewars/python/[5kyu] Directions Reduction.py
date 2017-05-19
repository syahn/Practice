# Reflection

# - Failed 
# - It's the same problem as valid parenthesis

def dirReduc(arr):
    map = {'NORTH': 'SOUTH', 'SOUTH': 'NORTH', 'EAST': 'WEST', 'WEST': 'EAST'}
    ret = []
    for d in arr:
        if ret and ret[-1] is map[d]:
            ret.pop()
        else:
            ret.append(d)

    return ret

