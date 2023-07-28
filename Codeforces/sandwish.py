def run():
    b,c,h = map(int, input().split())
    fill = c+h
    if fill >= b:
        while fill >= b:
            fill -= 1
        print(fill + b)
    else:
        print(fill + fill + 1)

if __name__ == "__main__":
    tc = int(input())
    for i in range(tc):
        run()