def number_line_jumps(x1, v1, x2, v2):
    if (v1 == v2):
        if (x1 == x2):
            print("YES")
        else:
            print("NO")
            
    else:         
        result = (x1 - x2) / (v2 - v1)
        if (result == int(result)) and (result >= 0):
            print("YES")
        else:
            print("NO")

if __name__ == "__main__":
    x1, v1, x2, v2 = map(int, input().split())
    number_line_jumps(x1, v1, x2, v2)