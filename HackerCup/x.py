def run():
    N = int(input())
    apples = list(map(int, input().split()))

    apples.sort()

    left = 0
    right = ((2 * N) - 1) - 1

    common = []

    while N > 0:
        apples.append(apples[left] + apples[right])
        


if __name__ == "__main__":
    tc = int(input())
    for i in range(tc):
        print(f'Case #{i+1}: {run()}')