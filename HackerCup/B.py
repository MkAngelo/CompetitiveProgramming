def run():
    r, c, a, b = map(int, input().split())
    if r > c:
        return "YES"
    else:
        return "NO"
    
        
if __name__ == "__main__":
    tc = int(input())
    for i in range(tc):
        print(f'Case #{i + 1}: {run()}')