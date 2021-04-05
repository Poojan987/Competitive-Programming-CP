s=input()
temp=s[0]
c=1
ans=""
ans+=temp
tempC=0
for i in range(1,len(s)):
    if(len(ans)<2):
        ans+=s[i]
    elif(ans[len(ans)-1]==ans[len(ans)-2] and ans[len(ans)-1]==s[i]):
        continue
    elif(len(ans)>=3 and(ans[len(ans)-2]==ans[len(ans)-3] and ans[len(ans)-1]==s[i])):
        continue
    else:
        ans+=s[i]

    
    # if(s[i]==temp):
    #     c+=1
    #     tempC=c
        
    # else:
    #     temp=s[i]
    #     c=1
        
    # if(c<3):
    #     if(c<2 or tempC<2):
    #         ans+=s[i]
        
    
print(ans)
