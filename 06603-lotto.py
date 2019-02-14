from typing import List


def r(datas: List[int], lst: List[int], index: int):

    if 6 == len(lst):
        print(*lst)
        return

    if index == len(datas):
        return

    r(datas, lst+[datas[index], ], index+1)
    r(datas, lst, index+1)


while True:
    line = input()
    if line == "0":
        break

    datas = list(map(int, line.split()[1:]))

    r(datas, [], 0)

    print()
