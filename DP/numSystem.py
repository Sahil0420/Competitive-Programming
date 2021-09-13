# from this import d
def dtoBinary(num):
    bin=''
    while num>=1:
        bin+=str((num%2))
        num=num//2
    return bin[::-1]
    # return int(bin)
def dtoOctal(num):
    oct=''
    while num>=1:
        oct+=str((num%8))
        num=num//8
    return oct[::-1]
    # return int(bin

def dtoHex(num):
    d={10:'A',11:'B',12:'C',13:'D',14:'E',15:'F'}
    hex=''
    while num>=1:
        r=num%16
        num=num//16
        if(r<16 and r>9):
            hex+=str(d[r])
        else:
            hex+=str(r)
    return hex[::-1]        

def btoDecimal(binary):
    decimal,i,n=0,0,0
    while(binary!=0):
        dec =binary%10
        decimal = decimal + dec * pow(2,i)
        binary = binary//10
        i+=1
    return decimal


n=int(input("Enter a number  : "))
print(dtoBinary(n))
print(dtoOctal(n))
print(dtoHex(n))
print(btoDecimal(n))
