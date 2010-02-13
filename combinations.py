def combinations(arr,head,tail):
    N = len(arr)
    if head < N-2:
        print arr,arr[head],arr[head+1]
        if tail<N:
            arr[head+1],arr[tail]=arr[tail],arr[head+1]
            tail += 1
            combinations(arr,head,tail)
        else:
            print "-------"
            combinations(arr,head+1,head+3)
    else:
        print arr,arr[head],arr[head+1]

System.out.println(set.get(4,6));
print set.get(4,6)

wheredowegonow=[0,2]
arr=[1,2,3,4,5,6]

def combinations2(arr,N):
    head=wheredowegonow[0]
    tail=wheredowegonow[1]
    print arr,arr[head],arr[head+1]
    if tail<N:
        arr[head+1],arr[tail]=arr[tail],arr[head+1]
        tail += 1
        wheredowegonow[1]=tail
    else:
        print "-------"
        wheredowegonow[0]=head+1
        wheredowegonow[1]=head+3
