n = int(input("Enter size of array: "))
arr = list(map(int, input(f"Enter {n} elements: ").split()))
freq = {}
for x in arr:
    freq[x] = freq.get(x, 0) + 1
for k, v in freq.items():
    print(f"{k} occurs {v} times")