//scanf scanfset character []

#include<stdio.h>
char str[1000] = { 0, };


int main() {
	scanf("%5[^abcd]s", str);
	printf("%s", str);

	return 0;
}




//  
//1 [^X] --- X가 나오기 전까지 다 받음
//char str[1000] ={0,}; 
// input = "popabcd123456abcdefg";
//scanf("%[^abcd]s",str);
// pop
// 
// 
//2 [X] --- X 이외가 오지 않으면 다 받음 = X만 다 받고 X이외가 나오면 끝
//char str[1000] ={0,}; 
// input = "abcd123456abcdefg";
//scanf("%[abcd]s",str);
// "abcd"
//
//
//3 Y[(^)X] --- X에 포함되는 것들을 Y자리만큼 받음 (Y는 정수) !!{^ 있으면 1 따라가고 없으면 2 따라감}
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
