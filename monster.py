def run():
    enemigos, golpes = map(int, input().split())
    vidas = list(map(int, input().split())) 
    enem = []
    while max(vidas)>0:
        index = vidas.index(max(vidas))
        vidas[index]-=golpes
        if vidas[index] <= 0:
            enem.append(index+1)
    print(enem)
        


if __name__ == "__main__":
    tc = int(input())
    for i in range(tc):
        run()