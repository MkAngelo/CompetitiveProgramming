def main():
    n = int(input())
    arr = list(map(int, input().split()))
    m = 1
    temp = 1
    for i in range(n-1):
        if arr[i]<=arr[i+1]:
            temp+=1
        else:
            if(m < temp):
                m = temp
            temp = 1
    if(m < temp):
        m = temp

    print(m)
if __name__ == '__main__':
    main()
