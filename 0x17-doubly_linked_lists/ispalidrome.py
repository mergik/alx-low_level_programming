def is_palindrome(n):
    """Check if a number is a palindrome."""
    return str(n) == str(n)[::-1]

largest_palindrome = 0

for i in range(999, 99, -1):
    for j in range(i, 99, -1):
        product = i * j
        if product > largest_palindrome and is_palindrome(product):
            largest_palindrome = product

# Save the result in the file
with open("102-result", "w") as file:
    file.write(str(largest_palindrome))

