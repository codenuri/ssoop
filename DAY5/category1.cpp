// category1
#include <list>
#include <vector>
#include <algorithm>

int main()
{
	std::list<int>   s = { 1,2,3,4,5 };
	std::vector<int> v = { 1,2,3,4,5 };

	auto p1 = s.begin();
	auto p2 = v.begin();
	
	// #1. �ݺ��ڵ� ������ �ֽ��ϴ�. ( iterator category)
	p1 = p1 + 3; // error   list �ݺ��ڴ� + �ȵ�. ++�� ����
				//          +�� �����ߴٸ�
				//			"*(p1 + i) = 0" ���� �ڵ带 ����ϰ� �˴ϴ�.

	p2 = p2 + 3; // ok      vector �ݺ��ڴ� + ����

	// #2. �ݺ��ڸ� 5������ �з��մϴ�.
	
	// input iterator :    ++p, =*p
	// output iterator :   ++p, *p =
	// 
	// ===> �� 2���� ��Ƽ �н� ���� ����, 
	// ===> �Ʒ� 3���� ��Ƽ �н� ����
	// 
	// forward iterator:   ++p, = *p			=> �̱۸���Ʈ
	// bidirectional iterator : =*p, ++, --		=> ��������Ʈ
	// random access iterator : =*p, ++, --, +, -, []  ���ӵȸ޸𸮿�����


	// #3. �� 5�� �з��� �߿� �մϱ� ??

	auto ret = std::find(s.begin(), s.end(), 3);
			// => find �˰������� 1, 2��° ������ �ּ� �䱸 ������ 
			//    5�� �з����� ã������.. => input-iterator

	std::reverse(s.begin(), s.end());
			// => bidirectional 

	std::sort(s.begin(), s.end()); // ����Ʈ �Դϴ�.
			// => random access iterator �� �䱸 �մϴ�.
			// => �׷���, s �� list �̰� list �ݺ��ڴ�
			//    bidirectional �̹Ƿ� error
			//    - ������ �ȵǴ� �ݺ���

	s.sort(); // list �� std::sort()�� ������ ���� ������
			  // ��� �Լ��� �����մϴ�. 
			  // quick �� �ƴ� �ٸ� �˰�����!!(selection, bubble ��)

	v.sort(); // vector ���� �� ��� �Լ��� ������� ?


//	std::sort()

	// #3. �ݺ����� �̵�
	std::vector<int> c = { 1,2,3,4,5 };

	auto first = c.begin();

	// first �� 3ĭ �̵��ϰ� �ʹ�.
	first = first + 3; // ���� ���� �ݺ���(vector)�� ����
					   // list �ݺ��� �ȵ�.

	++first; ++first; ++first; // ��� �ݺ��� ����
						// ������, ���������̸� ����.

	std::advance(first, 3); // first �� ���������̸� +��
							// �ƴϸ� ++�� �̵�.

}
