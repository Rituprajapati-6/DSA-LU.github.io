s = input()
st = s.split()

for i in range(len(st)): 
    st[i] = int(st[i]) 
    #print(st[i])

m = 1
for i in st:
   m = m * i
print(m)
    
