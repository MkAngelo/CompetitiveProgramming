def run():
    n = int(input())
    points = list(map(int, input().split()))
    points.sort()


    if n != 5:
        fr = (points[0] + points[1]) // 2
        sc = (points[n-1] + points[n-2]) // 2
        return sc - fr
    else:   
        fr = (points[0] + points[2]) / 2
        sc = (points[n-1] + points[n-2]) / 2
        ans = sc - fr

        fr = (points[0] + points[1]) / 2
        sc = (points[n-1] + points[n-3]) / 2
        return max(ans,sc - fr)

if __name__ == "__main__":
    tc = int(input())
    for i in range(tc):
        print(f'Case #{i + 1}: {run()}')