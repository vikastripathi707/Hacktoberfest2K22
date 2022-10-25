import sys
l=[]
n=int(input('enter no of elements'))
print("enter the elements")
for i in range(0,n):
      ele=int(input());
      l.append(ele)
      
key=int(input("enter the key"))
low=0
high=n-1
while(low<=high):
    mid=int((low+high)/2)
    if key==l[mid]:
        print('successful search ,element found at',mid,'position')
        break
    elif (key <l[mid]):
        high=mid-1
    elif (key>l[mid]):
        low=mid+1
if low>high:
    print('element not found')
    
