def is_balanced(expr):
    stack = []
    pairs = {')':'(', ']':'[', '}':'{'}
    for ch in expr:
        if ch in '([{': stack.append(ch)
        elif ch in ')]}':
            if not stack or stack[-1]!=pairs[ch]: return False
            stack.pop()
    return not stack

# Example
print(is_balanced("{[()]}"))  
print(is_balanced("{[(])}"))   
