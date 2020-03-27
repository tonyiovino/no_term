num = 0
f_num = 0
#FILE = f                 #Non so se sia giusto, non credo.

if os.path.isfile(f):
	f = open('sum.dat', 'r');
	string = f.readline()
	f_num = int(string)
	print('Lettura dal file sum.dat in corso...')
	print('Valore corrente: ', f_num)
	print('Inserisca il valore da sommare: ')

	f.close()
else:
	print('Il file sum.dat non esiste.\nCreare un nuovo valore: ')
	num = input()
	num = int(num)

somma = f_num + num

f = open('sum.dat', 'w')

f.write(somma)

print('Ho letto il valore ', somma)

print('Salvataggio nel file sum.dat in corso...')

f.close()
