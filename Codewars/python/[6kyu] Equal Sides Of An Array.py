# Reflection

# Idea is same, but improved readability

def find_even_index(arr):
    right = sum(arr) - arr[0]
    left = 0
    if left == right: return 0
    right -= arr[1]
    left = arr[0]
    for i in range(1, len(arr)):
        if left == right: return i
        right -= arr[i + 1] if i != len(arr) - 1 else 0
        left += arr[i]
    return -1


# improved
def find_even_index(lst):
    left_sum = 0
    right_sum = sum(lst)
    for i, a in enumerate(lst):
        right_sum -= a
        if left_sum == right_sum:
            return i
        left_sum += a
    return -1
