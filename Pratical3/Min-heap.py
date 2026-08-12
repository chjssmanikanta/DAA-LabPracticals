def heapify(heap, n, i):
    smallest = i
    left = 2 * i + 1
    right = 2 * i + 2

    if left < n and heap[left] < heap[smallest]:
        smallest = left

    if right < n and heap[right] < heap[smallest]:
        smallest = right

    if smallest != i:
        heap[i], heap[smallest] = heap[smallest], heap[i]

        heapify(heap, n, smallest)
def build_min_heap(heap, n):
    for i in range(n // 2 - 1, -1, -1):
        heapify(heap, n, i)
n = int(input("Enter the number of elements: "))
heap = []
print("Enter", n, "elements:")
for i in range(n):
    heap.append(int(input()))


print("\nInput Array:", *heap)

build_min_heap(heap, n)

print("\nMin Heap:", *heap)

print("Minimum Element:", heap[0])
