import argparse

# Ensure to always runthe program with command line arguments (E.x. python Prog.py -h or python Prog.py 4, etc.) and not VSCode's default build task.

parser = argparse.ArgumentParser(description="calculate X to the power of Y") # Create the argument parser, and specify a description of how to use the program
parser.add_argument("x", type=int, help="the base") # Mandatory arguments
parser.add_argument("y", type=int, help="the exponent") # Mandatory arguments
group = parser.add_mutually_exclusive_group() # Arguments registered under this group will be mutually exclusive (either or)
group.add_argument("-v", "--verbose", help = "output verbose", action = "store_true") # "store_true" gives true if specified and false if not specified, multiple identifiers can also be used
group.add_argument("-q", "--quiet", help = "output quiet", action = "store_true") # "store_true" gives true if specified and false if not specified, multiple identifiers can also be used
parser.add_argument("--add", type = int, help = "add a number to the answer", default = 0 )
parser.add_argument("-O", help = "counts the number of occurences of Os", action = "count", default = 0)
args = parser.parse_args() # Create a list of all the arguments and their states

answer = args.x**args.y
answer += args.add

if args.quiet:
    print("{}".format(answer))
elif args.verbose:
    print("{} to the power of {} plus {} is equal to {}".format(args.x, args.y, args.add, answer))
else:
    print("{} ^ {} + {} = {}".format(args.x, args.y, args.add, answer))

print("You have entered {} Os".format(args.O))