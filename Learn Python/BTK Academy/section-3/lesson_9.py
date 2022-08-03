website = "http://www.sadikturan.com"
course  = "Python Kursu: Baştan Sona Python Programlama Rehberiniz (40 saat)"

# 1- 'course' karakter dizisinde kaç karakter bulunmaktadır ?
result= len(course)

# 2- 'website' içinden www karakterlerini alın.
answer2= website[7:10]
print(answer2)

# 3- 'website' içinden com karakterlerini alın.
answer3=website[22:25]
print(answer3)
length=len(website)
print(website[length-3:length])

# 4- 'course' içinden ilk 15 ve son 15 karakterlerini alın.
answer4a=course[0:15]
answer4b=course[-15:]
print(f'Answer 4.a:{answer4a}')
print(f'Answer 4.b:{answer4b}')

# 5- 'course' ifadesindeki karakterleri tersten yazdırın.
answer5=course[::-1]
print(answer5)

name, surname, age, job = 'Bora','Yılmaz', 32, 'mühendis' 

# 6- Yukarıda verilen değişkenler ile ekrana aşağıdaki ifadeyi yazdırın.
#    'Benim adım Bora Yılmaz, Yaşım 32 ve mesleğim mühendis.'
print(f'Benim adım {name} {surname}, Yaşım {age} ve mesleğim {job}.')

# 7- 'Hello world' ifadesindeki w harfini 'W' ile değiştirin.
s = 'Hello world'
s = s[0:6] + 'W'+ s[-4:]

print(s)

# 8- 'abc' ifadesini yan yana 3 defa yazdırın.