#include "byte_array_value.h"

ByteArrayValue::ByteArrayValue()
{

}

ByteArrayValue::ByteArrayValue(Value *val)
{
    char *valData;
    int valSize = val->getVal(valData);
    setVal(QByteArray(valData, valSize));
}

void ByteArrayValue::setVal(const char *data, int size)
{
    valData = QByteArray(data, size);
}

int ByteArrayValue::getVal(char *data)
{
    memcpy(data, valData.data(), valData.size());
    return valData.size();
}

bool ByteArrayValue::isEmpty()
{
    return valData.isEmpty();
}

void ByteArrayValue::setVal(QByteArray val)
{
    valData = val;
}

QByteArray ByteArrayValue::getVal()
{
    return valData;
}

bool ByteArrayValue::operator==(ByteArrayValue &val)
{
    return getVal() == val.getVal();
}
