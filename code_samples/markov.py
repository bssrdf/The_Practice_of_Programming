import sys

from collections import defaultdict
from random import choice

NPREF = 2


def shift1(li, s):
    for i in range(0, len(li)-1):
        li[i] = li[i+1]   
    li[len(li)-1] = s
    

def build(infile):
    hashtab = defaultdict(list) 
    prefix = ['\n']*NPREF
    with open(infile) as file:
       for line in file:
           for word in line.split():
               hashtab[''.join(prefix)].append(word)
               shift1(prefix, word)          
          
    return hashtab

def run():
    hashtab = build(sys.argv[1])    
    prefix = ['\n']*NPREF
    for i in range(1000):
        surfix = choice(hashtab[''.join(prefix)])        
        shift1(prefix, surfix)
        print(surfix, end=' ')



if __name__ == "__main__":
    run()