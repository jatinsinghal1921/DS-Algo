#code

def is_rotated(str1, str2):
    
    if len(str1) != len(str2):
        return 0
    
    if len(str1) == 1 or len(str1) == 2:
        if str1 == str2:
            return 1
        else:
            return 0
    
    temp1 = str2[2:] + str2[0:2]
    temp2 = str2[len(str2)-2 : ] + str2[:len(str2)-2]
    
    if str1 == temp1 or str1 == temp2:
        return 1
    else:
        return 0


def main():
    testCaseCount = int(input())
    while testCaseCount:
        in_string1 = input()
        in_string2 = input()
        print(is_rotated(in_string1, in_string2))
        testCaseCount -= 1

main()
