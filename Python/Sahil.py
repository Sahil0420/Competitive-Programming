import pandas as pd
import csv
import itertools
import datetime


def question_one():
  def area(a): return a*a
  def perimeter(a): return 4*a

  n = int(input("Enter the side of square : "))
  data = {i: {'area': area(i), 'perimeter': perimeter(i)}
          for i in range(1, n+1)}

  print(data)


'''
# Tasks:
a. **Calculate the duration (in days)** between `start_date` and `end_date` for each project.
b. **Calculate the Total cost** incurred for all tasks across the two projects.
'''


def question_two():
  data = {'employee': {'name': 'Alice Johnson', 'age': 28, 'department': 'Finance'},
          'projects': [
      {'project_id': 101, 'start_date': datetime.datetime(2021, 1, 15), 'end_date': datetime.datetime(2021, 6, 30), 'tasks': [
          {'task': 'Budget Analysis', 'hours': 40, 'cost_per_hour': 20.5},
          {'task': 'Expense Forecasting', 'hours': 25, 'cost_per_hour': 22.0}, ]},
      {'project_id': 102, 'start_date': datetime.datetime(2022, 2, 10), 'end_date': datetime.datetime(2022, 8, 15), 'tasks': [
          {'task': 'Data Modeling', 'hours': 50, 'cost_per_hour': 25.0},
          {'task': 'Financial Reporting', 'hours': 30, 'cost_per_hour': 27.5}, ]}]}

  for j, i in enumerate(data['projects']):
    duration = str(i['end_date'] - i['start_date'])[:3]
    print(f'''Project {j+1} duration => {duration} days''')
    tasks = i['tasks']
    total_cost = 0
    for task in tasks:
      total_cost += task['hours'] * task['cost_per_hour']
    print(f'''Project {j+1} costs => {total_cost}''')


'''
**Using the data provided above:**
1. Create all possible combinations of fruits, weights, prices, and regions. Save these combinations to a CSV file with these columns:
    `Fruit`, `Weight (kg)`, `Price per kg`, `Region`.
2. Calculate the total number of rows in the resulting CSV file.
'''


def question_three():
  fruits = ['apple', 'banana', 'mango']
  weights = [1, 2, 3]
  prices = [100, 200]
  regions = ['North', 'South']

  combs = list(itertools.product(fruits, weights, prices, regions))

  total_comb = len(combs)

  with open('fruit_data.csv', 'w', newline='') as file:
    writer = csv.writer(file)
    writer.writerow(['Fruits', 'Weight (kg)', 'Prices', 'Region'])
    writer.writerows(combs)


'''
# Ques4: 10 Marks

---

1. **From the url https://api.kite.trade/instruments.**
2. **Using pandas find average of “strike” when name= “FINNIFTY” and expiry = “31-12-2024”**
'''


def question_four():
  try:
    df = pd.read_csv('./instruments.csv')
    # print(df.info())
    filter_df = df[
        (df['name'] == 'FINNIFTY') & (df['expiry'] == '2024-12-31')
    ]

    avg_strike = filter_df['strike'].mean()

    print(avg_strike)
  except Exception as e:
    print(e)


def question_five():
  wikipedia_article = "The world of technology has been advancing at an unprecedented rate in recent years. New devices are being introduced into the market regularly, revolutionizing how we interact with the world around us. The internet has become an essential part of our daily lives, connecting people from all corners of the globe. Technology is also playing a significant role in healthcare, education, and entertainment, making these industries more accessible and efficient. However, with the rapid growth of technology, there are also concerns about its impact on privacy, security, and employment. As we continue to rely more on technology, it's essential to address these concerns and ensure that advancements are being used ethically and responsibly. The future of technology looks promising, with AI, automation, and renewable energy leading the way, but we must remain mindful of the potential risks."
  hmap = {}
  for i in list(wikipedia_article.split()):
  	if i.lower() in hmap:
  		hmap[i.lower()] += 1
  	else:
  		hmap[i.lower()] = 1

  max_ans = list(wikipedia_article.split())
  max_ans = max_ans[0].lower()
  for key in hmap:
  	if hmap[max_ans] < hmap[key]:
  		max_ans = key
  	print(f'{key}-->{hmap[key]}')

  print(max_ans)

def question_eight():
	sales_data = {
    'Product': ['Laptop', 'Smartphone', 'Tablet', 'Smartwatch', 'Headphones', 'Smartphone', 'Laptop', 'Tablet'],
    'Quantity': [15, 20, 7, 5, 30, 15, 10, 25],
    'Price': [500, 300, 200, 150, 50, 300, 500, 200],
    'Date': ['2023-01-15', '2023-02-10', '2023-03-12', '2023-04-20', '2023-05-10', '2023-06-05', '2023-07-07', '2023-08-14']
    }
	
	df = pd.DataFrame(sales_data)
	df['Total_Sales'] = df['Quantity'] * df['Price']
	sorted_df = df.sort_values(by='Total_Sales', ascending=False)
	print("\n2. Sorted DataFrame by Total Sales:")
	print(sorted_df)
	avg_price = df['Price'].mean()
	print(f"\n3. Average price of all products: ${avg_price:.2f}")
	expensive_sales = df[df['Price'] > 200]['Total_Sales'].sum()
	print(f"\n4. Total sales for products with price > $200: ${expensive_sales:,.2f}")
	product_quantities = df.groupby('Product')['Quantity'].sum()
	print("\n5. Total quantity sold by product:")
	print(product_quantities)
  



def main():
  # question_one()
  # question_two()
  # question_three()
  # question_four()
  question_five()
  # question_eight()


if __name__ == '__main__':
  main()
