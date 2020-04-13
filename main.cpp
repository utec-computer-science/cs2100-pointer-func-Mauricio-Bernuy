#include <iostream>
using namespace std;

void * _bubblesort_(
	void * _array_, 
	void (*_puntero_) (void *, int _i, int _k),
	int _tam_
){
	int _k = 0;
	for (int i = 0; i < _tam_ ; i++)
		for(int k = 0; k < _tam_-1; k++)
			_puntero_(_array_,k,_k);
	return _array_;
}

void  _b_int_ (void * _vector_, int _i,int _k){
    _k = _i+1;
    if (((int*)_vector_)[_i] > ((int*)_vector_)[_k]){
        int temp = ((int*)_vector_)[_i];
        ((int*)_vector_)[_i] = ((int*)_vector_)[_k];
        ((int*)_vector_)[_k] = temp;
    }
}

void print_int(void * _vector_, int _tam_){
    for(int i = 0; i <_tam_; i++){
        cout<< ((int*)_vector_)[i]<<" ";
    }
    cout<<endl;
}

void  _b_float_ (void * _vector_, int _i,int _k){
    _k = _i+1;
    if (((float*)_vector_)[_i] > ((float*)_vector_)[_k]){
        float temp = ((float*)_vector_)[_i];
        ((float*)_vector_)[_i] = ((float*)_vector_)[_k];
        ((float*)_vector_)[_k] = temp;
    }
}
void print_float(void * _vector_, int _tam_){
    for(int i = 0; i <_tam_; i++){
        cout<< ((float*)_vector_)[i]<<" ";
    }
    cout<<endl;
}

void  _b_double_ (void * _vector_, int _i,int _k){
    _k = _i+1;
    if (((double*)_vector_)[_i] > ((double*)_vector_)[_k]){
        double temp = ((double*)_vector_)[_i];
        ((double*)_vector_)[_i] = ((double*)_vector_)[_k];
        ((double*)_vector_)[_k] = temp;
    }
}
void print_double(void * _vector_, int _tam_){
    for(int i = 0; i <_tam_; i++){
        cout<< ((double*)_vector_)[i]<<" ";
    }
    cout<<endl;
}

void  _b_char_ (void * _vector_, int _i,int _k){
    _k = _i+1;
    if (((char*)_vector_)[_i] > ((char*)_vector_)[_k]){
        char temp = ((char*)_vector_)[_i];
        
        ((char*)_vector_)[_i] = ((char*)_vector_)[_k];
        ((char*)_vector_)[_k] = temp;
    }
}
void print_char(void * _vector_, int _tam_){
    for(int i = 0; i <_tam_; i++){
        cout<< ((char*)_vector_)[i]<<" ";
    }
    cout<<endl;
}

int main(){
	int i = 0;
	int _array_1 [5] = {2,20,7,108,9}; // RANDOMS
	float _array_2 [5] = {4.4, 5.4, 9.1, 7.4, 2.2};
	double _array_3 [5] = {3.0,8.0,2.0,4.0,15.0};
	char _array_4 [6] = {'k','a','r','l','o','s'};

	_bubblesort_(_array_1,_b_int_,5);
    print_int(_array_1, 5);

	_bubblesort_(_array_2,_b_float_,5);
    print_float(_array_2, 5);

	_bubblesort_(_array_3,_b_double_,5);
    print_double(_array_3, 5);

	_bubblesort_(_array_4,_b_char_,6);
    print_char(_array_4, 6);


    return 0;
}