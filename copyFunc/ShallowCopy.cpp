class ShallowCopy
{
public:
	ShallowCopy() {
		count++;
	}
	~ShallowCopy() {
		count--;
	}
	static	int  getCount() {
		return count;
	}
	ShallowCopy(const ShallowCopy& r)
	{
		width = r.width;
		height = r.height;
		count++;
	}
private:
	int width;
	int height;
	static int count;
};

