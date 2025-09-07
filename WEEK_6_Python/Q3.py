def circular_tour(petrol, dist):
    start=curr=bal=0
    for i in range(len(petrol)):
        bal+=petrol[i]-dist[i]
        if bal<0:
            start=i+1; curr+=bal; bal=0
    return start if bal+curr>=0 else -1

# Example
petrol=[4,6,7,4]; dist=[6,5,3,5]
print(circular_tour(petrol,dist))  
