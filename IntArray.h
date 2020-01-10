#ifndef IntArray_h
#define IntArray_h
namespace ia {
	class IntArray
	{
	public:
		explicit IntArray(size_t);
		~IntArray();
		IntArray(IntArray const& a);
		IntArray& operator = (IntArray const& a);
		size_t GetSize() const;
		int GetElById(size_t) const;
		void SetElById(size_t, int);
		void Resize(size_t);
		void Swap(IntArray *);
		void ShowAllElsInC() const;

	private:
		size_t siz;
		int* poi;
	};
}
#endif // !IntArray_h