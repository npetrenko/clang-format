#include <vector>

class FromInclude {
};

int second_include();

struct Hey {
    struct ImInHey {
    };
};

template <class > void TemplateDecl();

class Class {
public:
    int Method()     {
        return 0;
    }
private:
    int so_private_;
};

class OutOfLine {
public:
    int OtherMethod();
};

int OutOfLine::OtherMethod() {
    return -1;
}


class NoInlineclass {
};

int main() {
    int x = 1 + 1;
    int a;
    a = x + 2;
    if (a < 2) {
        a = 51;
    }
    return x - 2;
}


