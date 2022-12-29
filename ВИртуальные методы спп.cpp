#include<iostream>
using namespace std;

template<size_t sz>
class BitString
{
    unsigned char* data;
    size_t mSize;
public:
    BitString(void) : mSize(sz) { data = new unsigned char[mSize + 1]; data[mSize] = '\0'; }
    BitString(const BitString& other) : BitString()
    {
        for (size_t i = 0; i < mSize; ++i)
            data[i] = other.data[i];
    }

    BitString& operator=(const BitString& other)
    {
        if (this == &other)
            return *this;

        for (size_t i = 0; i < mSize; ++i)
            data[i] = other.data[i];
        return *this;
    }

    ~BitString(void) { delete[] data; }

    size_t size(void) const { return mSize; }

    void fillRandomize(void)
    {
        for (size_t i = 0; i < mSize; ++i)
            data[i] = '0' + rand() % 2;
    }

    friend BitString operator&(const BitString& bs1, const BitString& bs2)
    {
        BitString ret;
        for (size_t i = 0; i < bs1.size(); ++i)
            ret.data[i] = '0' + ((bs1.data[i] - '0') && (bs2.data[i] - '0'));

        return ret;
    }


    friend std::istream& operator>>(std::istream& in, BitString& bs)
    {
        in.peek();
        std::streamsize sBufSz = in.rdbuf()->in_avail();

        for (size_t i = 0; i < bs.size(); ++i)
        {
            if (i < sBufSz)
                in >> bs.data[i];
            else
                bs.data[i] = '0';
        }

        in.ignore();
        return in;
    }

    friend std::ostream& operator<<(std::ostream& out, const BitString& bs)
    {
        out << bs.data;
        return out;
    }
};