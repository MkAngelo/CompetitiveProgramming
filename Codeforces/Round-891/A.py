def run():
    n = int(input())
    array = list(map(int, input().split()))
    zum = sum(array)
    if zum % 2 == 0:
        print("YES")
    else:
        print("NO")

if __name__ == "__main__":
    tc = int(input())
    for i in range(tc):
        run()
