MAX_SIZE = 36
MIN_SIZE = 0
SIZE = abs(MAX_SIZE)+abs(MIN_SIZE)+1
MAX_PLAYS = 12 #K
LAYOUT = 'Z101010101001010101101010101001010101'

COLOUR_STACK = MAX_PLAYS*['-']

class NumberElement:
	counted: int = 0
	lastCount: int = -1

def calculate(a, id, playCounter):
	a[id].counted += 1
	a[id].lastCount = playCounter
	COLOUR_STACK.pop(0)
	COLOUR_STACK.append(LAYOUT[id])

def printMostCommonNumbers(a):
	max = -1
	for id in range(MIN_SIZE, MAX_SIZE+1):
		if a[id].counted > max:
			max = a[id].counted
	for id in range(MIN_SIZE, MAX_SIZE+1):
		if a[id].counted == max:
			print(id, ' ', sep='', end='')
	print()

def printMissingNumbers(a, playCounter):
	K = min(MAX_PLAYS-1, playCounter)
	for id in range(MIN_SIZE, MAX_SIZE+1):
		if playCounter-a[id].lastCount > K:
			print(id, ' ', sep='', end='')
	print()

def printColourStats(COLOUR_STACK):
	RED = 0
	BLACK = 0
	for id in range(0, len(COLOUR_STACK)):
		if COLOUR_STACK[id] == '0': BLACK += 1
		if COLOUR_STACK[id] == '1': RED +=1
	print(RED, BLACK) 
		

def printResult(a, playCounter):
	printMostCommonNumbers(a)
	printMissingNumbers(a, playCounter)
	printColourStats(COLOUR_STACK)
	print()

a = []
for i in range(0, SIZE):
	a.append(NumberElement())
playCounter = 0
#Input
id = int(input())
while not (id == -1):
	calculate(a, id, playCounter)
	printResult(a, playCounter)
	playCounter += 1
	id = int(input())