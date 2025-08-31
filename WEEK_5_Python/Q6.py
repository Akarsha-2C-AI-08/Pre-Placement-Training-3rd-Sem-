def stock_span(prices):
    n=len(prices)
    span=[0]*n; stack=[]
    for i in range(n):
        while stack and prices[stack[-1]]<=prices[i]: stack.pop()
        span[i]= i+1 if not stack else i-stack[-1]
        stack.append(i)
    return span

# Example
print(stock_span([100,80,60,70,60,75,85]))   
