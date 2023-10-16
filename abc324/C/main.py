#! /usr/bin/env python

N, T_prime = input().split()
N = int(N)

def is_possible(T, S):
    T_len = len(T)
    S_len = len(S)

    if T == S:
        return True

    if abs(T_len - S_len) > 1:
        return False

    if T_len == S_len:
        diff_count = sum(1 for i in range(T_len) if T[i] != S[i])
        return diff_count == 1

    if T_len < S_len:
        T, S = S, T
        T_len, S_len = S_len, T_len

    i, j = 0, 0
    diff_count = 0
    while i < T_len and j < S_len:
        if T[i] != S[j]:
            diff_count += 1
            i += 1
            if diff_count > 1:
                return False
        else:
            i += 1
            j += 1

    return True

possible_indices = []

for i in range(N):
    S = input()
    if is_possible(T_prime, S):
        possible_indices.append(i + 1)

print(len(possible_indices))
if len(possible_indices): print(*possible_indices)
