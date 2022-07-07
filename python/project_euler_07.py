"""
 # @ Author: wywise
 # @ Create Time: 2020-11-11 21:57:38
 # @ Modified time: 2020-11-11 22:30:19
 """


counter = 0
num = 1

for counter in range(10001):
    num += 1
    for i in range(2, num):
        if (num % i) == 0:
            # print(num, "is not a prime number")
            # print(i, "times", num//i, "is", num)
            break
        else:
            # print(num, "is a prime number")
            counter += 1
            print(counter)

print(num)
