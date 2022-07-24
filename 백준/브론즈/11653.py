#그럿타. 소인수분해는 잣밥이엇따. 우후후후훟
N = int(input())
foot = 2
dick = N

while foot <= N:
    if dick%foot == 0:
        print(foot)
        dick = dick//foot
        continue
    foot+=1
   
