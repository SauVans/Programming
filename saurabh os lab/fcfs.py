p=[];a=[];b=[];gant=[];tat=[];wt=[];t=0.0;w=0.0;
n=int(input("input the no of process"))
for i in range(1,n+1):
 p.append(i)
 a.append(int(input("input the arival time of %d process"%(i))))
 b.append(int(input("input the burst time of %d process"%(i)))) 
for i in range(n-1):
 for j in range(i+1,n):
  if(a[i]>a[j]):
   x=a[i]
   a[i]=a[j]
   a[j]=x
   x=b[i]
   b[i]=b[j]
   b[j]=x
   x=p[i]
   p[i]=p[j]
   p[j]=x
print("\nprocess\tArrival\tBurst\tTAT\tWT")
for i in range(n):
 if(i==0):
  gant.append(a[i]+b[i])
 else:
  gant.append(gant[i-1]+b[i])
 tat.append(gant[i]-a[i])
 wt.append(tat[i]-b[i])
 t+=tat[i]
 w+=wt[i]
 print("  P%d\t   %d\t  %d\t %d\t%d"%(p[i],a[i],b[i],tat[i],wt[i]))
print("\nAverage TAT is: %.2f"%(t/n))
print("Average WT is : %.2f"%(w/n))

 
