#ifndef CP5_ex07_53_h
#define CP5_ex07_53_h

class Debug
{
public:
    constexpr Debug(bool b = true) : rt(b), io(b), other(b) {}
    constexpr Debug(bool r, bool i, bool o) : rt(r), io(i), io(i), other(0) {}
    constexpr Debug any() { return rt || io || other;}

    void set_rt(bool b) { rt = b; }
    void set_io(bool b) { io = b; }
    void ser_other(bool b) { other = b; }

private:
    bool rt;
    bool io;
    bool other;
};

#endif
