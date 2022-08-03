message = 'Hello there. My name is Sadık Turan.'.split()
# print(message)


# my_list = [1,2,3]
# my_list = ['bir',2,True,5.6]
# print(my_list)


list1 = ['one','two','three']
list2 = ['four','five','six']
numbers = list1 + list2
print(numbers)
print(len(numbers))
print(message[0])
print(numbers[2])


userA = ['Sadık',36]
userB = ['Çınar',2]
users = [userA,userB]
print(userA)
print(userB)
print(users)

a = users[1]    #users dizisinin 1 nolu indexine yani userB dizisine gittik.
print(a[0])     #userB dizisinin 0 nolu indexine yani Çınar ismine gittik.

print(users[1][0])  #userB dizisinin 1 nolu indexteki dizinin 0 nolu elemanına gittik.