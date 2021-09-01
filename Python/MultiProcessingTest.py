import multiprocessing
import time

def func(x): # Arbitrary testing function
    time.sleep(x) # Utilize sleep to take up time without eating CPU
    return x

if __name__ == "__main__":    
    pool = multiprocessing.Pool() # Initialize a Pool instance (i'm unsure of how to use the arguments)
    start = time.time() # Record start time to calculate elapsed time

    for x in pool.imap_unordered(func, [1,2,5,4,3]): # Using this, Pool will distribute work between processes to iterate this function more efficiently.
        print("func(x) = {} [{}s])".format(x, time.time() - start))

''' imap will give the following:
1 (Time elapsed: 1s)
2 (Time elapsed: 2s)
5 (Time elapsed: 5s)
4 (Time elapsed: 5s)
3 (Time elapsed: 5s)
'''

''' imap_unordered will give the following:
1 (Time elapsed: 1s)
2 (Time elapsed: 2s)
3 (Time elapsed: 3s)
4 (Time elapsed: 4s)
5 (Time elapsed: 5s)
'''

'''map will give the following:
1 (Time elapsed: 5s)
2 (Time elapsed: 5s)
5 (Time elapsed: 5s)
4 (Time elapsed: 5s)
3 (Time elapsed: 5s)
'''

'''
The difference between map and imap is map converts an iterable to a list (chunks) and sends it to the pool. On the other hand, imap iterates over the iterable one at a time.
This results in map returning all calls after the same period of time and imap returning them after each case is dealt with, so long as it can preserve the order of the arguments.

As for the differences between imap and imap_unordered, imap_unordered ignores the order of the provided arguments, to increase speed.
This results in it yielding immediately after finishing a task, regardless of order. 

Additionally, one can specify the number of processes that should be used by Pool(). I am unaware of how this directly affects execution, but it may speed up calculation times.
'''

# Adapted from: https://stackoverflow.com/questions/26520781/multiprocessing-pool-whats-the-difference-between-map-async-and-imap