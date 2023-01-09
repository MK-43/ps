# from sys import stdin


def solve(str):
    alphabets = [0 for i in range(26)]

    prev = 27
    for c in str:
        idx = ord(c) - 97
        if alphabets[idx] and prev != idx:
            return 0
        else:
            alphabets[idx] = True
            prev = idx
    return 1


# if __name__ == '__main__':
while True:
    try:
        n = int(input())

        ans = 0
        for i in range(n):
            str = input()
            ans += solve(str)
        print(ans)
    except:
        break
