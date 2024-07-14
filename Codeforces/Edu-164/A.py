def run():
    n, m, k = map(int, input().split())
    if (n-(n//m + (n%m != 0)) <= k):
        print("NO")
        return

    print("YES")

if __name__ == "__main__":
    tc = int(input())
    for i in range(tc):
        run()
