def main():
    s1=input()
    s2=input()
    ans=''
    for i in range(len(s1)):
        if(s1[i] == s2[i]):
            ans+='0'
        else:
            ans+='1'
    print(f'{ans}')

if __name__ == '__main__':
    main()
