import time

# Read the value of n
n = int(input("Enter a number: "))

# Initialize factorial
fact = 1

# Start time
start_time = time.perf_counter_ns()

# Calculate factorial iteratively
for i in range(1, n + 1):
    fact = fact * i

# End time
end_time = time.perf_counter_ns()

# Calculate time taken
time_taken = end_time - start_time

# Display the result
print("Factorial of", n, "=", fact)
print("Time Taken:", time_taken, "nanoseconds")
