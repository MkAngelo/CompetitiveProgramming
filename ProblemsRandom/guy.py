def main():
    n = int(input())
    l1 = list(map(int, input().split()))
    l2 = list(map(int, input().split()))
    l1.pop(0)
    l2.pop(0)
    lc = l1+l2
    success = set(lc)
    if len(success)==n:
        print('I become the guy.')
    else:
        print('Oh, my keyboard!')

if __name__ == '__main__':
    main()
