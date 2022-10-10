from tkinter.font import names


list = [1,2,3]
tuple = (1,'iki',3)

# print(type(list))
# print(type(tuple))

# print(list[2])
# print(tuple[2])

# print(len(list))
# print(len(tuple))

list = ['ali','veli']
tuple = ('damla','ayşe', 'ayşe')
names = ('demet','emel', 'ayşe') + tuple

print(names)

list[0] = 'ahmet'
# tuple[0] = 'deniz'  #tuple'da istenilen indexteki eleman değiştirilemez o yüzden hata verir

print(tuple.count('ayşe'))
print(tuple.index('ayşe'))  # index ile 'ayşe' elemanının İLK nerede bulunduğunu görebiliriz

print(list)
print(tuple)