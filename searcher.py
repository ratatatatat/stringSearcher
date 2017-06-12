from fuzzywuzzy import fuzz
from fuzzywuzzy import process


def searchString(subString,text):
	processedString = text
	subLength = len(subString)
	textLength = len(processedString)
	scoreArray = []
	maxScore = 0
	maxWord = ''
	for i in range(textLength - subLength + 1):
		subWord = processedString[i:i+subLength]
		score = genScore(subString,subWord)
		scoreArray.append(score)
		dummyMax = max(maxScore,score)
		if(dummyMax != maxScore):
			maxWord = subWord # This is the closest match
			maxScore = dummyMax
		else:
			continue
	# print scoreArray
	print "Closest Matching String" + maxWord
	print "Score: " + str(maxScore)
	print "subWord: " + str(subString)

def genScore(subString,text):
	return fuzz.ratio(subString,text)

