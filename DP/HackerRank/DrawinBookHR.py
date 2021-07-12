pages = int(input().strip())
key = int(input().strip())

total_pages = pages//2
page_in_book = key//2

from_front= page_in_book
from_back = total_pages - page_in_book
print(min(from_front , from_back))