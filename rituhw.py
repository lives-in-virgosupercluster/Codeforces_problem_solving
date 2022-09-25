n=int(input())
import re
nickname=[]
name=[]
for i in range(n):
    x=input()
    y=input()
    for j in range(len(name)):
        if(x==name[j] and y==nickname[j]):
            print("nickname and name are already present")
    name.append(x)
    nickname.append(y)
    if(re.search(y,x)):
        print("nickname is present in name")


        
