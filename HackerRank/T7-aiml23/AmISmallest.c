from collections import Counter

def is_possible_string(string):
    char_counts = Counter(string)  # Count the occurrences of each character
    sorted_chars = sorted(char_counts.keys())  # Sort the characters in ascending order

    for char in string:
        char_counts[char] -= 1  # Decrement the count of the current character

        for smaller_char in sorted_chars:
            if smaller_char < char and char_counts[smaller_char] > 0:
                return "Yes"  # Found a smaller character, return "Yes"

    return "No"  # No smaller character found, return "No"

# Get the number of testcases
T = int(input())

# Process each testcase
for _ in range(T):
    # Get the string for the current testcase
    string = input()

    # Check if a smaller string is possible and print the result
    print(is_possible_string(string))
