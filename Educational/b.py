def main(tc):
    n = int(input())
    arr = []
    for i in range(1, n+1):
        arr.append(i)
    
    for elem in arr:
        print(elem, end=' ')
    print()

if __name__ == '__main__':
    t = int(input())
    tc = 1
    while tc <= t:
        main(tc)
        tc+=1
