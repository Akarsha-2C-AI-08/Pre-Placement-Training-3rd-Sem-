# Simple simulation of undo-able text editor
text=""; history=[]
q=int(input("Queries: "))
for _ in range(q):
    cmd=input().split()
    if cmd[0]=="1": # append
        history.append(text)
        text+=cmd[1]
    elif cmd[0]=="2": # delete last k chars
        history.append(text)
        text=text[:-int(cmd[1])]
    elif cmd[0]=="3": # print kth char
        print(text[int(cmd[1])-1])
    elif cmd[0]=="4": # undo
        text=history.pop()
