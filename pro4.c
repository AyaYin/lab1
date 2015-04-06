#include<stdio.h>

#define STATE_INIT 	  0
#define STATE_PROCESSING  1
#define STATE_END	  2

void compare( int *state , int *number ){
	
	if( *state == STATE_INIT ){
		
		printf("Please input a integer number, -1 will kill process\n");
		scanf("%d", number);
		*state = STATE_PROCESSING;
		
	}
	else if ( *state == STATE_PROCESSING ){
		
		if ( *number == -1 ){ 
			*state = STATE_END;
			return;
		}
		printf("%s\n", (*number > 10) ? "The number is bigger than 10" :
					"The number is not bigger than 10" );
		printf("-------------------------------------------------\n");
		*state = STATE_INIT;
		
	}
	else if ( state == STATE_END ){ 
		return;
	}
	
	return;
	
}

int main(){ 

	int state = STATE_INIT;
	int number = 0;

	while ( 1 ) {
		
		if ( state == STATE_INIT ) { 
			compare( &state, &number );
		}
		else if ( state == STATE_PROCESSING ){ 
			compare( &state, &number );
		}
		else if ( state == STATE_END ){ 
			break;
		}
	}

	return 0;

}
