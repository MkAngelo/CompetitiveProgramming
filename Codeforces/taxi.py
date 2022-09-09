import math
def main():
    n = int(input())
    groups = list(map(int, input().split()))
    total = 0

    for kids in groups:
        total+=kids

    taxis = math.ceil(total/4)

    print(taxis)

if __name__ == '__main__':
    main()
