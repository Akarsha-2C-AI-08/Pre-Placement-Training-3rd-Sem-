def celebrity(matrix):
    n=len(matrix)
    stack=list(range(n))
    while len(stack)>1:
        a,b=stack.pop(),stack.pop()
        if matrix[a][b]==1: stack.append(b) # a knows b
        else: stack.append(a)
    c=stack[0]
    for i in range(n):
        if i!=c and (matrix[c][i]==1 or matrix[i][c]==0): return -1
    return c

# Example
M=[[0,1,0],[0,0,0],[0,1,0]]
print("Celebrity index:", celebrity(M))   
