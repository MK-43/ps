def solution(s):
    num_list = s.split()
    num_list = list(map(int, num_list))

    max_value = max(num_list)
    min_value = min(num_list)
    answer = str(min_value) + ' ' + str(max_value)
    try:
        answer = min_value + ' '
    except Exception as e:
        print(e)

    return answer


if __name__ == '__main__':
    while True:
        try:
            s = input()
            print(solution(s))
        except:
            break
