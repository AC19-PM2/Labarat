#include "head.h"

ostream& operator<< (ostream& os, const details& details) {

    os << details.name << " " << details.material << " " << details.weight << " " << details.v<<endl;
    return os;
}
istream& operator>> (istream& is, details& details) {
    is >> details.name>> details.material >> details.weight>>details.v;
    return is;
}
