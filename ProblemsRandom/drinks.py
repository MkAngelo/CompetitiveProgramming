def main():
    n = int(input())
    p = list(map(int, input().split()))
    num = 0.0
    for elem in p:
        num += elem/100
    sol = (num / n) * 100 
    print(f'{sol}')

if __name__ == '__main__':
    main()
