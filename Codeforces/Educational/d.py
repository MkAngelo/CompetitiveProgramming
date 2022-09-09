def main(tc):
    text = list(input())
    t1=[]
    t2=[]

    inicio = 0
    fin = len(text) -1
    turn = 0

    while(inicio<=fin):
        letra = ''
        if(text[inicio]<text[fin]):
            letra = text[inicio]
            inicio+=1
        else:
            letra = text[fin]
            fin-=1

        if turn == 0:
            t1.append(letra)
            turn=1
        else:
            t2.append(letra)
            turn=0

    s1 = ''.join(t1[::-1])
    s2 = ''.join(t2[::-1])

    if s1 < s2:
        return 'Alice'
    elif s2 < s1:
        return 'Bob'
    else:
        return 'Draw'

if __name__ == '__main__':
    t = int(input())
    tc = 1
    while tc <= t:
        print(main(tc))
        tc+=1
