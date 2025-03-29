def can_form_hello(s):
    target = "hello"
    target_index = 0
    target_length = len(target)

    for char in s:
        if char == target[target_index]:
            target_index += 1
            if target_index == target_length:
                return "YES"
    
    return "NO"

def main():
    s = input().strip()
    print(can_form_hello(s))

if __name__ == "__main__":
    main()
