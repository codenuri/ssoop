# sptr.py

class Car:
	def __init__(self):		# 생성자
		print("Car()")

	def __del__(self):		# 소멸자
		print("~Car()")

c = Car()

print("---------")

# >> python sptr.py 로 실행해 보세요
