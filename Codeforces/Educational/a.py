def main(tc):
    c = int(input())
    b = list(map(int, input().split()))
    if c == 1:
        return 1
    m = max(b)
    if m == 1:
        return c
    else:
        return b.index(m) + 1

if __name__ == '__main__':
    t = int(input())
    tc = 1
    while tc <= t:
        print(main(tc))
        tc+=1
