#include <stdio.h>

#define REP(i, a, b) for (int i=a; i<=b; i++)

//int m1[10];
//int m2[10];

struct set {
	int length;
	int a[];
};

//struct mnoz prienik( struct mnoz a, struct mnoz b);

//p_array(int * a){
//	for(int i = 0, sizeof(a
//}

bool inside(int num, int * a){ //ci num patri do a
	int asize = sizeof(a)/4;
	for (int i = 0; i<asize; i++){
		if(num==a[i]){	
			return true;
		}
	}
	return false;
}

int * truncate(int *a, int last_index){
	int result[last_index+1];
	for(int i = 0; i<last_index+1; i++){
		result[i] = a[i];
	}
	return result;
	
}

//int * prienik( int *a, int *b){
//	int result[];
//	int asize = sizeof(a)/4;
//	int bsize = sizeof(a)/4;
//	int index_res = 0;
//	for (int i = 0; i<asize; i++){
//		for (int j = 0; j<bsize; j++){
//			if(a[i]==b[j] and !inside(a[i], result)){
//				result[index_res] = a[i];
//				index_res++;
//			}
//		}
//	}
//	//truncate result
//	result = truncate(result, index_res);
//	return result;
//}

//int * zjednotenie( int *a, int *b){
//	int result[20];
//	int asize = sizeof(a)/4;
//	int bsize = sizeof(a)/4;
//	int index_res = 0;
//	for (int i = 0; i<asize; i++){
//		if(inside( a[i], b)){
//			result[index_res] = a[i];
//		};
//	}
//	//truncate result
//	result = truncate(result, index_res);
//	return result;
//}


int main(){
	int arr1[5] = {1,3,4,5,6};
	printf("%d", sizeof(arr1));
}