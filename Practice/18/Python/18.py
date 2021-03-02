words = ['hallo', 'klempner', 'das', 'ist', 'fantastisch', 'fluggegecheimen'] 

def GetCharProb(charID, words_count, vocabulary):
	return vocabulary[charID] / words_count

def Init():
	vocabulary = 256*[0] 
	words_count = 0 
	for i in range(len(words)):
		s = words[i]
		words_count += len(s)
		for j in range(len(s)):
			charID = ord(s[j])
			vocabulary[charID] += 1
	return words_count, vocabulary

words_count, vocabulary = Init()
x = input()
probability = 1;
for i in range(len(x)):
	charID = ord(x[i])
	probability *= GetCharProb(charID, words_count, vocabulary)
print(probability)
