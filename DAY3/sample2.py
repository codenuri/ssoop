#sample2.py

class Car:
	def Go(self):
		print("Go")

c = Car()
c.Go()
c.Stop()
c = 10

# python -m py_compile sample2.py   해서 에러가 있는지 확인해 보세요