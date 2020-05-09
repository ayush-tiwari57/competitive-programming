

n, m = map(int, input().split())
words_1 = {input() for _ in range(n)}
words_2 = {input() for _ in range(m)}
    
print('YES' if n > m or n == m and len(words_1 & words_2) % 2 else 'NO')