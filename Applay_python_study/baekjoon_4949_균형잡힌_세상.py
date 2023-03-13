if __name__ == '__main__':
    while (True):
        text = input()
        if text == '.':
            break
        ecnt = 0
        stack = []
        for i in range(len(text)):
            if text[i] == '(' or text[i] == '[':
                stack.append(text[i])
            elif text[i] == ')':
                if stack and stack[-1] == '(':
                    stack.pop()
                else:
                    ecnt += 1
                    print('no')
                    break
            elif text[i] == ']':
                if stack and stack[-1] == '[':
                    stack.pop()
                else:
                    ecnt += 1
                    print('no')
                    break
        if ecnt == 0:
            if stack == []:
                print('yes')
            else:
                print('no')