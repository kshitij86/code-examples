dict_num2w = {0: 'zero', 1: 'one', 2: 'two', 3: 'three', 4: 'four', 5: 'five', 6: 'six', 7: 'seven', 8: 'eight', 9: 'nine', 10: 'ten', 11: 'eleven', 12: 'twelve', 13: 'thirteen', 14: 'fourteen', 15: 'fifteen', 16: 'sixteen', 17: 'seventeen', 18: 'eighteen', 19: 'nineteen', 20: 'twenty', 21: 'twentyone', 22: 'twentytwo', 23: 'twentythree', 24: 'twentyfour', 25: 'twentyfive', 26: 'twentysix', 27: 'twentyseven', 28: 'twentyeight', 29: 'twentynine', 30: 'thirty', 31: 'thirtyone', 32: 'thirtytwo', 33: 'thirtythree', 34: 'thirtyfour', 35: 'thirtyfive', 36: 'thirtysix', 37: 'thirtyseven', 38: 'thirtyeight', 39: 'thirtynine', 40: 'forty', 41: 'fortyone', 42: 'fortytwo', 43: 'fortythree', 44: 'fortyfour', 45: 'fortyfive', 46: 'fortysix', 47: 'fortyseven', 48: 'fortyeight', 49: 'fortynine', 50: 'fifty', 51: 'fiftyone', 52: 'fiftytwo', 53: 'fiftythree', 54: 'fiftyfour', 55: 'fiftyfive', 56: 'fiftysix', 57: 'fiftyseven', 58: 'fiftyeight', 59: 'fiftynine', 60: 'sixty', 61: 'sixtyone', 62: 'sixtytwo', 63: 'sixtythree', 64: 'sixtyfour', 65: 'sixtyfive', 66: 'sixtysix', 67: 'sixtyseven', 68: 'sixtyeight', 69: 'sixtynine', 70: 'seventy', 71: 'seventyone', 72: 'seventytwo', 73: 'seventythree', 74: 'seventyfour', 75: 'seventyfive', 76: 'seventysix', 77: 'seventyseven', 78: 'seventyeight', 79: 'seventynine', 80: 'eighty', 81: 'eightyone', 82: 'eightytwo', 83: 'eightythree', 84: 'eightyfour', 85: 'eightyfive', 86: 'eightysix', 87: 'eightyseven', 88: 'eightyeight', 89: 'eightynine', 90: 'ninety', 91: 'ninetyone', 92: 'ninetytwo', 93: 'ninetythree', 94: 'ninetyfour', 95: 'ninetyfive', 96: 'ninetysix', 97: 'ninetyseven', 98: 'ninetyeight', 99: 'ninetynine', 100: 'hundred'}
list_vow = ['a', 'e', 'i', 'o', 'u']

p_sum = 0
size_ip = int(input())
nums = list(map(int, input().split()))
# print(nums)

def make_vow_ct(num):
    if num >= 0 and num <= 100:
        charge = 0
        for character in dict_num2w[num]:
            if character in list_vow: charge += 1
        return charge
    else:
        return

def fd_odd_pair(p_sum, nums):
    count = 0 
    for i in range(0, len(nums)): 
        for j in range(i + 1, len(nums)):
            if nums[i] + nums[j] == p_sum:
                count += 1
    return count

for num in nums: p_sum = p_sum + make_vow_ct(num)

total = fd_odd_pair(p_sum, nums)
print(dict_num2w[total]) if total <= 100 else print('greater 100')