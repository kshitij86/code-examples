# Algortithm for sub string matching

def calc_code(pattern):
    code = 0

    for i in range(len(pattern), 0, -1):
        code += (((ord(pattern[len(pattern) - i]) + 1) - 97) * pow(10, i - 1))

    return code


def rabin_finder(string, pattern):
    if len(string) < len(pattern):
        return False

    if len(string) == len(pattern):
        return calc_code(string) == calc_code(pattern)

    # Code for the pattern
    # a -> 0
    # b -> 1 and so on
    pat_code = calc_code(pattern)
    print("Pattern code: ", pat_code)

    str_code = calc_code(string[:len(pattern)])
    print("String Code: ", str_code)
    for i in range(len(string) - 1):
        if str_code == pat_code:
            return True

        str_code -= (((ord(string[i]) - 97) + 1) * pow(10, len(pattern) - 1))
        str_code *= 10
        str_code += (ord(string[(len(pattern) - i) + 1]) - 97) + 1
        print(str_code)

    return False


print(rabin_finder('aababc', 'abc'))
# print(calc_code('aab'))
