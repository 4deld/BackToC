//scanf scanfset character []

#include<stdio.h>
char str[1000] = { 0, };


int main() {
	scanf("%5[^abcd]s", str);
	printf("%s", str);

	return 0;
}




//  
//1 [^X] --- X�� ������ ������ �� ����
//char str[1000] ={0,}; 
// input = "popabcd123456abcdefg";
//scanf("%[^abcd]s",str);
// pop
// 
// 
//2 [X] --- X �̿ܰ� ���� ������ �� ���� = X�� �� �ް� X�̿ܰ� ������ ��
//char str[1000] ={0,}; 
// input = "abcd123456abcdefg";
//scanf("%[abcd]s",str);
// "abcd"
//
//
//3 Y[(^)X] --- X�� ���ԵǴ� �͵��� Y�ڸ���ŭ ���� (Y�� ����) !!{^ ������ 1 ���󰡰� ������ 2 ����}
//char str[1000] ={0,}; 
// input = "abcd123456abcdefg";
//scanf("%5[abcd]s",str);
// abcd
// 
//scanf("%2[abcd]s",str);
// ab
// 
// 
// 
