#include<stdio.h>


int main(){ 
	
	int number = 10;
	/* 怎麼樣寫一個 function 將 number 改成你想要改的值？
	
	ANS:
	
		void change( int *number , int num ){
			*number = num;
		}
		
		使用時可如下:
		change( &number , 欲變更數值 ); 
		
	*/



	/* 請用自己的想法說明下面這段 code 的意思 */
	char *str = "hello world";
 
	while ( *str ) { 
		printf("%c\n", *str++);
	}
	
	/*
	ANS:
		
		當*str內容不為空時( 即str所指向之char不為空 )
		印出*str的內容
		系統會將*str++判定為 *(str++) 
		因此 while會從*str所指向的位置開始印出 每次增加一個位元的位置 
	
	*/ 
	
	
	
	/* 下面這段 code ， str2 是一個指向 char 的指標
	 * 他指向了字串 "hello world" 的第一個位址
	 * 在這裡 "hello world" 會被分配在 .text 段位，
	 * 當作是一個 const 型別的唯讀字串，不能進行任何修改
	 * 但是 pointer to char : str2 卻可以一直移動
	 */

	char *str2 = "hello world";
	int i = 0;
	while ( i < 100 ){ 
		printf("%c\n", *str2++);
	}
	
	/*
	ANS:
		
		這個地方和上方的while的差別在 
		上方以*str的內容做為判斷  因此當他印出到整串hello word結束時 會離開while
		而這個*str2的while是以i為判斷
		因為i會always小於100 因此其為無限迴圈
		但是系統判定的*(str2++) 會每次做更移
		從一開始的位置不斷地移動到加上一個位元的位置
		因此印完hello world之後 可能會一直印出記憶體中殘留的其他東西 
	
	
	*/
	
	return 0;

}
