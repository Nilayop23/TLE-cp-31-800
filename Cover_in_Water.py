T = int(input())
for _ in range(T):
    n = int(input())
    s = input()
    pattern = "..."

    if pattern in s:
        print(2)
    else:
        counting = 0
        for i in range(n):
            if s[i] == ".":
                counting += 1
        print(counting)
