def run():
    S, D, K = map(int, input().split())
    buns = (S + D) * 2
    d_patty = D * 2
    t_patty = S + d_patty

    if buns >= K+1 and t_patty >= K:
        return 'YES'
    else:
        return 'NO'

if __name__ == "__main__":
    tc = int(input())
    for i in range(tc):
        print(f'Case #{i+1}: {run()}')