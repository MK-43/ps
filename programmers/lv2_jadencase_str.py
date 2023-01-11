def solution(s):
    answer = ''

    is_first = True
    for c in s:
        if c == ' ':
            answer += c
            is_first = True
            continue

        if is_first:
            is_first = False
            if not c.isnumeric():
                answer += c.upper()
            else:
                answer += c
        else:
            answer += c.lower()

    return answer


if __name__ == '__main__':
    while True:
        try:
            s = input()
            print(solution(s))
        except:
            break
