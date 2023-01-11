def solution(storey):
    answer = 0
    while storey:
        # print(">> ", storey)
        last = storey % 10
        if last > 5:
            answer += 10 - last
            storey += 10 - last
        elif last < 5:
            answer += last
            storey -= last
        else:
            if (storey / 10) % 10 >= 5:
                answer += 10 - last
                storey += 10 - last
            else:
                answer += last
                storey -= last
        # print("ans: ", answer)
        storey //= 10

    return answer

def sol(storey):
    return dfs(storey, 0)

INF = 100000005 # 100 million
ans = INF # max

def dfs(storey, cnt):
    global ans
    print("storey: ", storey, "cnt: ", cnt)
    if ans < cnt:
        return cnt

    if storey // 10 == 0:
        return min(cnt + (storey % 10), cnt + 10 - (storey % 10) + 1)
        
    last_digit = storey % 10
    b = dfs(storey // 10, cnt + last_digit) # downward
    a = dfs(storey // 10 + 1, cnt + 10 - last_digit) # upward
    
    print("a: ", a)
    print("b: ", b)
    return min(a,b)

    # return min(dfs(storey // 10, cnt + storey - (storey // 10)), dfs(storey // 10, cnt + (storey //10)- storey))
    
    

if __name__ == '__main__':
    while True:
        try:
            storey = int(input())
            print("ans: ", sol(storey))
        except:
            break
    