def possible(x):
    i=0
    for j in range(2*x-1,n):
        f=1
        a=0
        for b in range(i+x,j+1):
            if s[a]!=s[b] and s[a]!="?" and s[b]!="?":
                f=0
                break
            a+=1

        if f==0:
            break
        i+=1
        if f==1:
            return True
    return False


def run():    
    for i in range((n//2)+1,0,-1):
        if possible(i):
            print(2*i)
            return
        print(0)
        return


for _ in range(int(input())):
    s = input()
    n = len(s)
    run()