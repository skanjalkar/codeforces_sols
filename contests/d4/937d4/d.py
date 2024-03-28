def is_product_of_binary_decimals(n):
    if n == 1:
        return True

    queue = [n]
    while queue:
        curr = queue.pop(0)
        for i in range(len(str(curr)), 0, -1):
            prefix = curr // 10**i
            suffix = curr % 10**i
            if is_valid_binary_decimal(prefix):
                if suffix == 1:
                    return True
                if is_product_of_binary_decimals(suffix):
                    return True
                queue.append(suffix)

    return False

def is_valid_binary_decimal(num):
    return all(digit in '01' for digit in str(num))

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        n = int(input())
        print("YES" if is_product_of_binary_decimals(n) else "NO")
