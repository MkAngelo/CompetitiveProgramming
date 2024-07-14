def run():
    x1, x2, x = map(int, input().split())

    m = max(x1, x2)
    n = min(x1,x2)

    if n <= x and x <= m:
        return "YES"
    else:
        return "NO"


if __name__ == "__main__":
    tc = int(input())
    for i in range(tc):
        print(run())
