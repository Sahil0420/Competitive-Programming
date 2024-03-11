class MyCalendar:

  def __init__(self):
    self.bookings = {}

  def book(self, startTime: int, endTime: int) -> bool:
    if startTime in self.bookings:
      return False

    for i in self.bookings:
      if i <= startTime < self.bookings[i]:
        return False

    self.bookings[startTime] = endTime
    return True

def main():
  calender = MyCalendar()
  for i in range(int(input())):
    startTime , endTime = map(int , input().strip().split())
    a = calender.book(startTime , endTime)
    print(a)

if __name__ == '__main__':
  main()