#pragma once
struct dOutput{
	private:
	bool _i;
	unsigned char _p;
	public:
	bool Get(){
		return digitalRead(_p)!=_i;
	}
	bool Set(bool v){
		if (Get()==v) return false;
		digitalWrite(_p,v!=_i);
		return true;
	}
	dOutput(unsigned char p, bool i=false){
		_i=i;
		_p=p;
		pinMode(_p,OUTPUT);
		Set(false);
	}
};
