# Author: Angel Quintana
# Mexico City

def run():
    inp = list(input())

    nums = [int(x) for x in inp]

    for i in range(len(nums)):
        if sum(nums) % 9 == 0:
            break

        if nums[i] != 1 and nums[i] % 3 != 0:
            temp = nums[i] ** 2
            if temp < 10:
                nums[i] = temp

    if sum(nums) % 9 == 0:
        print("YES")
    else:
        print("NO")

if __name__ == "__main__":
    tc = int(input())
    # tc = 1
    for i in range(tc):
        run()
