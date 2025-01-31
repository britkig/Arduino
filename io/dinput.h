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
		pinMode(_p=p,_i=i?INPUT_PULLUP:INPUT);
	}
};
