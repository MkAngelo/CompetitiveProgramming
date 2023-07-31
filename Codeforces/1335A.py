def run():
    c = int(input())
    if c <= 2: return 0
    if c == 3: return 1
    if c % 2 == 0:
        return int((c/2)-1)
    else:
        return c//2

if __name__ == "__main__":
    tc = int(input())
    for i in range(tc):
        print(run())