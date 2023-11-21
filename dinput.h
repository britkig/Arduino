struct dInput{
	private:
	unsigned char p;
	bool i;
	public:
	bool Get(){
		return digitalRead(p)!=i;
	}	
	dInput(unsigned char _p, bool _i=false){
		i=_i;
		p=_p;
	}
}