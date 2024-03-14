# sptr.py

class Car:
	def __init__(self):		# 생성자
		print("Car()")

	def __del__(self):		# 소멸자
		print("~Car()")

c = Car()

c = 10

print("---------")

# >> python sptr.py 로 실행해 보세요

# python, swift 언어는 모든 변수가 기본적으로 "스마트포인터" 개념으로 만든것!
