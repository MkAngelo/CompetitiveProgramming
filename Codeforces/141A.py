def counter(text):
    dic = dict.fromkeys(text,0)
    for l in text:
        dic[l] += 1
    return dic
def run():
    text1 = input()
    text2 = input()
    textj = input()

    textplus = text1 + text2
    dic1 = counter(textplus)
    dic2 = counter(textj)
    if dic1 == dic2:
        print("YES")
    else: 
        print("NO")
if __name__ == "__main__":
    run()