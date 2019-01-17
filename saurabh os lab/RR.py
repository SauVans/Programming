a=[];b=[];p=[];gant=[];tat=[];wt=[];t=0.0;w=0.0;m=0;bt=[];
ts=int(input("Enter the Time Slice"))
n=int(input("Enter the total no. of process"))
for i in range(1,n+1):
 a.append(int(input("Enter the Arival time of %d process"%(i))))
 p.append(i)
 b.append(int(input("Enter the Burst time of %d process"%(i))))
 bt.append(b[i-1])
 m+=b[i-1]
 gant.append(i-i)
for i in range(n-1):
 for j in range(i+1,n):
  if(a[i]>a[j]):
   x=p[i]
   p[i]=p[j]
   p[j]=x
   x=a[i]
   a[i]=a[j]
   a[j]=x 
   x=b[i]
   b[i]=b[j]
   b[j]=x
print("\nProcess\tArrival\tBurst\tTAT\tWT")
gnt=min(a)
while(gnt!=m):
 for i in range(n):
  if(a[i]<=gnt and bt[i]>=ts):
   gnt+=ts
   gant[i]=gnt
   bt[i]=(bt[i]-ts)
  elif(a[i]<=gnt and bt[i]<ts and bt[i]>0):
   gnt+=bt[i]
   gant[i]=gnt
   bt[i]=0
  else:
   continue
for i in range(n): 
 tat.append(gant[i]-a[i])
 wt.append(tat[i]-b[i])
 t+=tat[i]
 w+=wt[i]
 print("   P%d\t  %d\t  %d\t%d\t%d"%(p[i],a[i],b[i],tat[i],wt[i])) 
print("Completion time of process are: ")
print(gant)
print("Average TAT is: %.2f"%(t/n))
print("Average WT is:  %.2f"%(w/n))

 
