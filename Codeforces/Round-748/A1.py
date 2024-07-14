def run():
    a = list(map(int, input().split()))
    s = sorted(a)

    for i in range(3):
        diff_to_max = s[2] - a[i]
        if diff_to_max>0:
            print(diff_to_max + 1, end=" ")
        else:
            if s[1] == s[2]:
                print(1, end=" ")
            else:
                print(0, end=" ")
     
    print()

if __name__ == "__main__":
    tc = int(input())
    for i in range(tc):
        run()