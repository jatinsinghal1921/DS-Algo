#code

def in_decimal(str1):
    map_dict = {
        'I' : 1,
        'V' : 5,
        'X' : 10,
        'L' : 50,
        'C' : 100,
        'D' : 500,
        'M' : 1000
    }
    
    string_len = len(str1)
    i = 0
    decimal = 0 
    while(i < string_len-1):
        if map_dict[str1[i]] >= map_dict[str1[i+1]]:
            decimal += map_dict[str1[i]]
            i += 1
        else:
            decimal += map_dict[str1[i+1]] - map_dict[str1[i]]
            i += 2
    
    if i == string_len-1:
        decimal += map_dict[str1[i]]
    
    print(decimal)


def main():
    testCaseCount = int(input())
    while testCaseCount:
        in_string1 = input()
        in_decimal(in_string1)
        testCaseCount -= 1

main()