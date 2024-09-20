# Author: Angel Quintana
# Mexico City
import math
def run():
    n = int(input())
    arr = list(map(int, input().split()))
    arr.sort()

    suma = 0

    temp = 1
    for i in range(n):
        suma += math.gcd(arr[i], temp)

    print(suma)

if __name__ == "__main__":
    tc = int(input())
    # tc = 1
    for i in range(tc):
        run()
