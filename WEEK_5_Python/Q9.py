def min_reversals(expr):
    if len(expr)%2: return -1
    stack=[]
    for ch in expr:
        if ch=='{' : stack.append(ch)
        else:
            if stack and stack[-1]=='{': stack.pop()
            else: stack.append(ch)
    open_count=stack.count('{')
    close_count=len(stack)-open_count
    return (open_count+1)//2 + (close_count+1)//2

# Example
print(min_reversals("}{{}}{{{"))   
