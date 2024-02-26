#include  <iostream>
/*
int bin( int * arr, int end, int tar){
	int start = 0 ;
	
	while( start <= end ){
		int tmp = (start+  end)/2 ;
		if( arr[tmp] == tar ) return tmp ; 
		else if ( arr[ tmp ] > tar ) end = tmp -1 ;
		else start = tmp +1 ;
	}
	return -1;
}
int sum( int  *ptr,  int size ){ 
		int s= 0;
		for( int i= 0 ; i < size ; i ++ ){
			for(int j = 0 ; j <size ; j++ )
				if( i == j || i+j+1 == size) s+= *(  ptr +i*size  +j );

		}
	return s;
} 
int binR( int  * ptr, int start, int   end, int tar) {
	if( start  > end ) return -1;
	int tmp = (start + end) / 2;
	if( ptr[tmp] == tar ) return tmp ;
	return ( ptr[tmp] > tar )  ? binR( ptr , start, tmp - 1, tar ) : binR( ptr, tmp+1 , end, tar );
}	*/
int getMax( int * ptr, int size ){
	int max = ptr[0];
	for( int i = 1 ; i < size  ; i ++ ){
		if( max < ptr[i] ) max = ptr[0];
	} 
	return max;
}
int ** getArr( int size ){
		int **  ptr = new int * [size];
		for(int i = 0 ; i < size ; i++ ){
			*(ptr+i) = new int [size];
			for( int j = 0 ; j< size ; j++ ){
				*( *(ptr+i) + j ) = j + i*size;
			}
		}
		return ptr;
}


int maxsum( int ** ptr,int size ){
	int sum= 0 ;
	for( int i = 0 ; i< size ; i++){
		sum += getMax( *(ptr+i) , size);
		};
	return sum;
}

void print( int ** ptr, int size){
	for(int i = 0 ; i < size ; i++){ 
		for(int  j = 0 ; j < size ; j++) 
			std::cout << *( * ( ptr + i  ) + j ) << " " ;
		std::cout << std::endl;
	}
}
int main(){
	int num = 0 ;
	std::cin >> num;
	int  **  ptr = getArr( num);	
	print( ptr, num);
	std::cout  << maxsum( ptr , num ) << std::endl ;
}
