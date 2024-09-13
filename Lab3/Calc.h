#ifndef Calc_h
#define Calc_h

class Calc
{
public:
	Calc() {};
	~Calc() {};

	
	//Mean and population standered deviation methods
	float mean(int x1, int x2, int x3, int x4);

	float Std(int x1, int x2, int x3, int x4);


private:
	double meanStd;

};

#endif // !Calc_h
