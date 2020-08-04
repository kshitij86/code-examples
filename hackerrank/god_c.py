mp = {"A": 3, "2": 3, "3": 5, "4": 4, "5": 4, "6": 3, "7": 5, "8": 5, "9": 4, "10": 3, "K": 4, "Q": 5, "J": 4}

#List of order of cards
cards = input.split()

order = "*" * len(cards)
for card in cards:
    pos = 0

    if (mp[card] + 1) < len(cards):
        pos += mp[card] + 1
    else:
