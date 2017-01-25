#ifndef BYTEARRAYVALUE_H
#define BYTEARRAYVALUE_H

#include "interface.h"
#include "QByteArray"

class ByteArrayValue: public Value
{
public:
    ByteArrayValue();
    ByteArrayValue(Value *val);

    virtual void setVal(const char *data, int size);
    virtual int getVal(char *data);
    virtual bool isEmpty();

    void setVal(QByteArray val);
    QByteArray getVal();
    bool operator==(ByteArrayValue &val);
private:
    QByteArray valData;
};

#endif // BYTEARRAYVALUE_H
