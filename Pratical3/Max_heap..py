# Function to maintain Max Heap property
def heapify(heap, n, i):
    largest = i
    left = 2 * i + 1
    right = 2 * i + 2

    if left < n and heap[left] > heap[largest]:
        largest = left

    if right < n and heap[right] > heap[largest]:
        largest = right

    if largest != i:
        heap[i], heap[largest] = heap[largest], heap[i]

        heapify(heap, n, largest)


# Function to build Max Heap
def build_max_heap(heap, n):
    for i in range(n // 2 - 1, -1, -1):
        heapify(heap, n, i)


# Main program
n = int(input("Enter the number of elements: "))

heap = []

print("Enter", n, "elements:")

for i in range(n):
    heap.append(int(input()))


print("\nInput Array:", *heap)

# Build Max Heap
build_max_heap(heap, n)

print("\nMax Heap:", *heap)

print("Maximum Element:", heap[0])
