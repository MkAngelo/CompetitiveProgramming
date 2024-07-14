def run():
    n = int(input())
    arr = list(map(int, input().split()))


    # Si la suma del arr es la divisible entre tres
    if sum(arr) % 3 == 0:
        return 0
    
    # Si agregando un 1, el arr es divisible entre tres
    if (sum(arr) + 1) % 3 == 0:
        return 1
    
    dif = sum(arr) % 3

    # Si esta en el arr lo puedo eliminar
    if dif in arr:
        return 1
    
    sear = 0
    ans = 0

    for _ in range(n):
        dif += 3
        ans += 1
        if dif in arr and (sum(arr) - dif) % 3 == 0:
            return ans
    return ans


if __name__ == "__main__":
    tc = int(input())
    for i in range(tc):
        print(run())