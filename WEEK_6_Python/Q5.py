from collections import OrderedDict
class LRU:
    def __init__(self,cap): self.cap,self.cache=cap,OrderedDict()
    def get(self,key):
        if key not in self.cache: return -1
        self.cache.move_to_end(key); return self.cache[key]
    def put(self,key,val):
        if key in self.cache: self.cache.move_to_end(key)
        self.cache[key]=val
        if len(self.cache)>self.cap: self.cache.popitem(last=False)

# Example
l=LRU(2); l.put(1,1); l.put(2,2)
print(l.get(1))
l.put(3,3)
print(l.get(2)) 