class IAsteroid
{
public:
	virtual ~IAsteroid(void) {}
	virtual std::string beMined([...] *) const = 0;
};
[...]
virtual std::string getName(void) const = 0;
