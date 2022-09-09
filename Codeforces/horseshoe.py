def main():
    shoes = list(map(int, input().split()))
    not_rep  = set(shoes)
    print(len(shoes)-len(not_rep))

if __name__ == '__main__':
    main()
