# Author: Angel Quintana
# Mexico City

def run():
    n = int(input())
    suma = 0
    arr = list(map(int, input().split()))

    for i in range(n):
        if i < n-2:
            suma += arr[i]

    ans = arr[n-1]-arr[n-2]+suma
    print(ans)


if __name__ == "__main__":
    tc = int(input())
    # tc = 1
    for i in range(tc):
        run()
