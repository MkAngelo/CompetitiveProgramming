
def run():
    a, b, k = map(int, input().split())
    
    if a%10 == b%10 == k:
        return "YES"
    
    b += a

    for i in range(10):
        if i == k == b%10:
            return "YES"
        b-=1

    return "NO"

if __name__ == "__main__":
    tc = int(input())
    for i in range(tc):
        print(run())
