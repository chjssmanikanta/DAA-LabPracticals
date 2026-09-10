def matrix_chain_order(p):
    n = len(p) - 1

    # m[i][j] = minimum number of scalar multiplications
    m = [[0] * (n + 1) for _ in range(n + 1)]

    # s[i][j] = position of the optimal split
    s = [[0] * (n + 1) for _ in range(n + 1)]

    for length in range(2, n + 1):
        for i in range(1, n - length + 2):
            j = i + length - 1
            m[i][j] = float('inf')

            for k in range(i, j):
                cost = (
                    m[i][k]
                    + m[k + 1][j]
                    + p[i - 1] * p[k] * p[j]
                )

                if cost < m[i][j]:
                    m[i][j] = cost
                    s[i][j] = k

    return m, s


def print_optimal_order(s, i, j):
    if i == j:
        return f"A{i}"

    k = s[i][j]

    left = print_optimal_order(s, i, k)
    right = print_optimal_order(s, k + 1, j)

    return f"({left} × {right})"


# Matrix dimensions:
# A1 = 5x4
# A2 = 4x2
# A3 = 2x3

p = [5, 4, 2, 3]

m, s = matrix_chain_order(p)

print("Minimum number of multiplications:", m[1][3])
print("Optimal parenthesization:", print_optimal_order(s, 1, 3))
