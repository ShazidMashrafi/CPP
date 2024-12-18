#set is an unordered collection of unique items
#set items can't be accessed using index
nums={1,2,3,4,5,5}
print(nums)

nums2=set([6,7,8,9,10,10])
print(nums2)
nums2.add(11)
print(nums2)
nums2.remove(11)
print(nums2)

#10 is in set 1 times, so removing 10 will remove 10 entirely
nums2.remove(10)
print(nums2)