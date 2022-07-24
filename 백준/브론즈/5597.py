#은서는 예쁘다
qoduf = [0]*31
for i in range(28):
    foot = int(input())
    qoduf[foot] = foot
for i in range(1,31):
    if qoduf[i] == 0:
        print(i)
