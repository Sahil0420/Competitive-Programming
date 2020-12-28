from collections import namedtuple
from collections import deque
from collections import defaultdict as DD

print("Running")
FullName = namedtuple("FullName" ,("first" , "middle" , "last"))

my_name = FullName("Sahil",'Singh',"Chandel")
print(my_name[0])
print(my_name.first)
for x in my_name:print(x)

nums = deque([] , maxlen=5)
for i in range(1,11):
    nums.append(i)
    print(nums)

item = DD(list)

item['Sahil'].append("views")

print(item)

