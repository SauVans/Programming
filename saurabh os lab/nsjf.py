a=[];b=[];p=[];gant=[];m=0;j=0;
n=int(input("Enter the total number of process"))
for i in range(1,n+1):
 b.append(int(input("Enter the burst time of %d process"%(i))))
 a.append(int(input("Enter the arrival time of %d process"%(i))))
 p.append(i)
 gant.append(0)
 m+=b[i-1]
gnt=min(a)
min=a[0]
for i in range(1,n):
 if(a[i]<min):
  min=a[i]
  j=i
gnt+=b[j]
b[j]=0
gant[j]=gnt
x=b[j]
print("  Process\tBurst\tArrival\tTAT\tWait")
while(gnt!=m):
   for i in range(n):
    if(a[i]<=gnt and b[i]<=x and b[i]>0): 
      x=b[i]
      j=i
      
   gnt+=b[j]
   b[j]=0
   gant[j]=gnt
   x=9999
print gant
