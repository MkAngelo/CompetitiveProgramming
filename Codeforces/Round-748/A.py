def run():
    candidates = list(map(int, input().split()))
    votes = [0] * 3

    max_val = max(candidates)

    if candidates.count(max_val) > 1:
        for i in range(3):
            if candidates[i] == max_val:
                votes[i] = 1
            else:
                votes[i] = (max_val - candidates[i]) + 1

        print(f"{votes[0]} {votes[1]} {votes[2]}")
        return
    
    for i in range(3):
        if candidates[i] == max_val:
            votes[i] = 0
        else:
            votes[i] = (max_val - candidates[i]) + 1

    print(f"{votes[0]} {votes[1]} {votes[2]}")
    return

if __name__ == "__main__":
    tc = int(input())
    for i in range(tc):
        run()