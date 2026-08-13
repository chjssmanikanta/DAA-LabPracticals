import time
def factorial(n):
    if n == 0 or n == 1:
        return 1

    return n * factorial(n - 1)
n = int(input("Enter a number: "))
start_time = time.perf_counter_ns()
result = factorial(n)
end_time = time.perf_counter_ns()
time_taken = end_time - start_time
print("Factorial of", n, "=", result)
print("Time Taken:", time_taken, "nanoseconds")
