segundos = int(input())

m = int(segundos/60)
convertendo_horas = int(segundos/3600)
convertendo_minutos = int(segundos/60) - (convertendo_horas*60)
convertendo_segundos = segundos - (m*60)

print('{}:{}:{}'.format(convertendo_horas,convertendo_minutos, convertendo_segundos))
