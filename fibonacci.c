#include <stdio.h>
#include <emscripten/emscripten.h>

int main(int argc, char ** argv) {
    printf("Module loaded\n");
}

#ifdef __cplusplus
extern "C" {
#endif

long EMSCRIPTEN_KEEPALIVE getFibonacciNumber(int index){
	if(index == 0){
		return 0;
	}
	else if(index == 1){
		return 1;
	}

	long prev = 0;
	long current = 1;
	for(int i=2; i<index; i++){
		long tmp = current;
		current = current + prev;
		prev = tmp;
	}

	return current;
}

#ifdef __cplusplus
}
#endif
