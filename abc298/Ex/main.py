#!/usr/bin/env python3
import sys


def solve(N: int, A: "List[int]", B: "List[int]", Q: int, L: "List[int]", R: "List[int]"):
  return


# Generated by 2.12.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
def main():
  def iterate_tokens():
    for line in sys.stdin:
      for word in line.split():
        yield word
  tokens = iterate_tokens()
  N = int(next(tokens))  # type: int
  A = [int()] * (N - 1)  # type: "List[int]"
  B = [int()] * (N - 1)  # type: "List[int]"
  for i in range(N - 1):
    A[i] = int(next(tokens))
    B[i] = int(next(tokens))
  Q = int(next(tokens))  # type: int
  L = [int()] * (Q)  # type: "List[int]"
  R = [int()] * (Q)  # type: "List[int]"
  for i in range(Q):
    L[i] = int(next(tokens))
    R[i] = int(next(tokens))
  solve(N, A, B, Q, L, R)

if __name__ == '__main__':
  main()
