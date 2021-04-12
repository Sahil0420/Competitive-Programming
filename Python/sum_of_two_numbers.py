def solve(a, b):
    ans, carry = 0, 0
    limit = 1 << 11       

    if a < 0:
        a = (1 << 12) + a
    if b < 0:
        b = (1 << 12) + b
    for i in range(12):
        x, y = a & 1, b & 1 
        summ = x ^ y ^ carry
        carry = (x & y) | ((x ^ y) & carry)
        ans |= (summ << i)  
        a >>= 1
        b >>= 1
        
    if ans & limit:  
        ans -= (1 << 12)
    return ans

def main():
    t = int(input())
    for _ in range(t):
        a, b = map(int, input().strip().split())
        print(a, b, solve(a, b))


if __name__ == '__main__':
    main()
