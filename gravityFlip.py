def main():
    n = int(input())
    arr = list(map(int, input().split()))
    for i in sorted(arr):
        print(i, end=' ')
    print()

if __name__ == '__main__':
    main()
