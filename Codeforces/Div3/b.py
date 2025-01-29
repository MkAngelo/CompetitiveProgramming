# Author: Angel Quintana
# Mexico City

def run():
    n = int(input())
    arr = []

    for i in range(n):
        arr.append(list(map(int, input().split())))

    print(arr)

if __name__ == "__main__":
    tc = int(input())
    # tc = 1
    for i in range(tc):
        run()
