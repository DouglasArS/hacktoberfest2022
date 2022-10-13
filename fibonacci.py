def fib(n: int) -> int:
    penult = 1
    last = 1
    if n < 1:
        return 0
    if n <= 2:
        return 1
    for i in range(2, n):
        elem = penult + last
        last = penult
        penult = elem
    return elem
