"""
This is a quick pig latin translater to test python code

Daniel Ramsayer
4/30/2016
"""
#The 'latin'
pyg = 'ay'

original = raw_input('Enter a word:')

#Check that they actually input something and that they are letters
if len(original) > 0 and original.isalpha():
    #convert to lower case
    word = original.lower()
    #grab the first letter
    first = word[0]
    #create the 'latin word'
    new_word = word[1:len(new_word)] + first + pyg
    print new_word
else:
    print 'empty'
