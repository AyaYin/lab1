#include<stdio.h>


int main(){ 
	
	int number = 10;
	/* ���˼g�@�� function �N number �令�A�Q�n�諸�ȡH
	
	ANS:
	
		void change( int *number , int num ){
			*number = num;
		}
		
		�ϥήɥi�p�U:
		change( &number , ���ܧ�ƭ� ); 
		
	*/



	/* �ХΦۤv���Q�k�����U���o�q code ���N�� */
	char *str = "hello world";
 
	while ( *str ) { 
		printf("%c\n", *str++);
	}
	
	/*
	ANS:
		
		��*str���e�����Ů�( �Ystr�ҫ��V��char������ )
		�L�X*str�����e
		�t�η|�N*str++�P�w�� *(str++) 
		�]�� while�|�q*str�ҫ��V����m�}�l�L�X �C���W�[�@�Ӧ줸����m 
	
	*/ 
	
	
	
	/* �U���o�q code �A str2 �O�@�ӫ��V char ������
	 * �L���V�F�r�� "hello world" ���Ĥ@�Ӧ�}
	 * �b�o�� "hello world" �|�Q���t�b .text �q��A
	 * ��@�O�@�� const ���O����Ū�r��A����i�����ק�
	 * ���O pointer to char : str2 �o�i�H�@������
	 */

	char *str2 = "hello world";
	int i = 0;
	while ( i < 100 ){ 
		printf("%c\n", *str2++);
	}
	
	/*
	ANS:
		
		�o�Ӧa��M�W�誺while���t�O�b 
		�W��H*str�����e�����P�_  �]����L�L�X����hello word������ �|���}while
		�ӳo��*str2��while�O�Hi���P�_
		�]��i�|always�p��100 �]���䬰�L���j��
		���O�t�ΧP�w��*(str2++) �|�C������
		�q�@�}�l����m���_�a���ʨ�[�W�@�Ӧ줸����m
		�]���L��hello world���� �i��|�@���L�X�O���餤�ݯd����L�F�� 
	
	
	*/
	
	return 0;

}
