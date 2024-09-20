# Author: Angel Quintana
# Mexico City
import math
def run():
    n = int(input())
    x, y = map(int, input().split())

    p = math.ceil(n/min(x,y))
    print(p)
if __name__ == "__main__":
    tc = int(input())
    # tc = 1
    for i in range(tc):
        run()
