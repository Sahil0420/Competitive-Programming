'''
Threads are used to perform multiple processing a single time .

using mulitple threads on a single time is called multithreading 
'''
import time
import concurrent.futures
import threading

start  = time.perf_counter()

def do_something(second):
	print(f'Sleeping {second} second(s)')
	time.sleep(second)
	return '__Done Sleeping__'

# do_something()

# threads = []

# for _ in range(4):
# 	t = threading.Thread(target=do_something , args=[1.5])
# 	t.start()
# 	threads.append(t)

# for thread in threads:
# 	thread.join()



with concurrent.futures.ThreadPoolExecutor() as executor:
	# f1 = executor.submit(do_something ,1 )
	# f2 = executor.submit(do_something ,1 )
	# print(f1.result())
	# print(f2.result())

	secs =[5,4,3,2,1]
	# results = [executor.submit(do_something , sec) for sec in secs]

	# for f in concurrent.futures.as_completed(results):
	# 	print(f.result())

	results = executor.map(do_something , secs)
	for r in results:
		print(r)


finish = time.perf_counter()
print(f"Finished in {round(finish-start ,2)} second(s) ")