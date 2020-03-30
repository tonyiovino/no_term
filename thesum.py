import os

f = 'sum.dat'
f_num = 0

if os.path.isfile(f):
	f = open(f, 'r');
	string = f.readline()
	f_num = int(string)
	print('Lettura dal file sum.dat in corso...')
	print('Valore corrente: ', f_num)
	print('Faro la somma di un nuovo valore.')

	f.close()
else:
	print('Il file sum.dat non esiste.')

num = input('Creare un nuovo valore: ')
num = int(num)
somma = f_num + num
somma = str(somma)

f = open('sum.dat', 'w')

f.write(somma)

print('Ho letto il valore ', somma)

print('Salvataggio nel file sum.dat in corso...')

f.close()
