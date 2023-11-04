#pragma once

template<typename T1,typename T2>
class NumberCompare
{
public:
	NumberCompare() {};
	~NumberCompare() {};

	void SetNumber(T1 n1,T2 n2)
	{
		n1_ = n1;
		n2_ = n2;
	}

	T1 Min() 
	{
		if (n1_ < n2_)
		{
			return n1_;
		}
		return static_cast<T1>(n2_);
	}

private:

	T1 n1_{};
	T2 n2_{};
};