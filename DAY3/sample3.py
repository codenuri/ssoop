class A:
	def cry(self):
		pass
class B:
	def cry(self):
		pass

def foo(x):	# 타입이름 없이 변수명(x) 만 표기
	x.cry()

a = A()
b = B()
foo(a)
foo(b)

