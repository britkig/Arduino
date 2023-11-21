#pragma once
struct dInput{
	private:
	bool _i;
	unsigned char _p;
	public:
	bool Get(){
		return digitalRead(_p)!=_i;
	}  
	dInput(unsigned char p, bool i=false){
		_i=i;
		pinMode(_p=p,_i?INPUT_PULLUP:INPUT);
	}
};
