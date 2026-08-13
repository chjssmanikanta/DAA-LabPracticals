import time

n = int(input("Enter a number: "))
fact = 1
start_time = time.perf_counter_ns()
for i in range(1, n + 1):
    fact = fact * i
end_time = time.perf_counter_ns()
time_taken = end_time - start_time
print("Factorial of", n, "=", fact)
print("Time Taken:", time_taken, "nanoseconds")
