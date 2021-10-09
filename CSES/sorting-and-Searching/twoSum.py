def two_sum(array, target):
    nums = {}
    l = len(array)
    for i in range(l):
    # for num in array:
        potentialMatch = target - array[i]
        if potentialMatch in nums:
            return [potentialMatch, num]
        else:
            nums[num] = True
    return []
