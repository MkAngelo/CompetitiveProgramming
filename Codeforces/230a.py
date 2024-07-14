def run():
    d, p = map(int, input().split())
    

if __name__ == "__main__":
    s, n = map(int, input().split())
    ans = True
    for _ in range(n):
        d, p = map(int, input().split())
        if s > d:
            s += p
        else:
            ans = False
            break
    if ans:
        print("YES")
    else:
        print("NO")
