col = 0
answer = 0


def dfs(i, j, mat, sum):
    if j == col or answer < sum:
        return sum

    return 0


def solution(A, B):
    global col, answer

    answer = 0
    col = len(B)

    mat = [[0 for x in range(len(A))] for y in range(len(B))]

    for i in range(len(A)):
        for j in range(len(B)):
            mat[i][j] = A[i]*B[j]
            print(mat[i][j], end=' ')
        print()

    dfs(i, j, mat, 0)

    return answer


if __name__ == '__main__':
    while True:
        try:
            A = list(map(int, input().split()))
            B = list(map(int, input().split()))
            print(solution(A, B))
        except:
            break
