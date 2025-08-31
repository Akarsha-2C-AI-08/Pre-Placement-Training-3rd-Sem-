def precedence(op):
    return {'+':1,'-':1,'*':2,'/':2,'^':3}.get(op,0)

def infix_to_postfix(expr):
    out, stack = [], []
    for ch in expr:
        if ch.isalnum(): out.append(ch)
        elif ch=='(':
            stack.append(ch)
        elif ch==')':
            while stack and stack[-1]!='(': out.append(stack.pop())
            stack.pop()
        else:
            while stack and precedence(stack[-1])>=precedence(ch):
                out.append(stack.pop())
            stack.append(ch)
    while stack: out.append(stack.pop())
    return "".join(out)

# Example
print(infix_to_postfix("a+b*(c-d)"))   # abcd-*+
