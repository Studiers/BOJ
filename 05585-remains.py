count = 0
price = 1000 - int(input())
coins = [500,100,50,10,5,1]

for coin in coins:
	count += price // coin
	price %= coin

print(count)