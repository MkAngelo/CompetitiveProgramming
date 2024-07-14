def run():
    string = input()
    
    ans = ""

    for i in range(0,len(string),2):
        if string[i].isdigit():
            temp = int(string[i])
            ans += string[i+1] * temp
        else:
            temp = int(string[i+1])
            ans += string[i] * temp

    return ans
            

if __name__ == "__main__":
    tc = int(input())
    for i in range(tc):
        print(run())
