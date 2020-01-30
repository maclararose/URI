x = float(input())

if x < 0.0 or x > 100.0:
    print('Fora de intervalo')
elif x == 0.0 or x < 25.0:
    print('Intervalo [0,25]')
elif 25.0 == x:
    print('Intervalo [0,25]')
elif 25.0 < x and x <= 50.0:
    print('Intervalo (25,50]')
elif x > 50.0 and x < 75.0:
    print('Intervalo (50,75]')
elif x > 75.0 and x <= 100.0:
    print('Intervalo (75,100]')
