import itertools

def run():
    n = int(input())
    arr = list(map(int, input().split()))

    perm = list(itertools.permutations(arr))

    for p in perm:
        for i in range(0, n-1):
            if p[i] % p[i+1] == 0:
                break
            if p[i] % p[i+1] != 0 and i+1 == n:
                return "YES"
    
    return "NO"

if __name__ == "__main__":
    tc = int(input())
    for i in range(tc):
        print(run())