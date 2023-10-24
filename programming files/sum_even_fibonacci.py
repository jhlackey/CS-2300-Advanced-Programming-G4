a, b = 0, 1
sum_even =  //No value set
while b < 4000000:
    if b % 2 == 0:
        sum_even += b
    a, b = b, a+b

print(sum_even)

# answer should be 4613732
