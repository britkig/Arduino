struct dOutput{
	private:
	unsigned char p;
	bool i;
	public:
	bool Get(){
		return digitalRead(p)!=i;
	}
	bool Set(bool v){
		if (Get()==v) return false;
		digitalWrite(p,v!=i);
		return true;
	}
	dOutput(unsigned char _p, bool _i=false){
		i=_i;
		p=_p;
		pinMode(p,OUTPUT);
		Set(false);
	}
};