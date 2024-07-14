def run():
    n = int(input())
    if n%2 == 1 or n<2:
        return "NO"
    print("YES")
    ans = "AAB" * (n//2)
    return ans

if __name__ == "__main__":
    tc = int(input())
    for i in range(tc):
        print(run())