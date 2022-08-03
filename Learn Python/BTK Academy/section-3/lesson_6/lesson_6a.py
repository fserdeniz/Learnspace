'''
    Daire Alanı   : πr²
    Daire Çevresi : 2πr    
    * Yarı çapı verilen bir dairenin alan ve çevresini 
    hesaplayınız. (r: 3.14)
'''
pi=3.14
r=float(input('Yarıçap:'))

alan=pi*(r**2)
cevre=2*pi*r

# print(alan)
# print(cevre)

print("Alan:" + " " + str(alan))
print("Çevre:" + " " + str(cevre))

# version of fse
