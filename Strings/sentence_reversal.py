
def reverse(in_str):
    words = in_str.strip().split('.')
    words.reverse()
    out_string = ".".join(words)
    return out_string


def main():
    testCaseCount = int(input())
    while testCaseCount:
        in_string = input()
        out_string = reverse(in_string)
        print(out_string)
        testCaseCount -= 1
    
main()