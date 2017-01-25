#ifndef DYNAMIC_STORAGE_H
#define DYNAMIC_STORAGE_H

#include <QList>
#include <QPair>
#include "string_key.h"
#include "byte_array_value.h"

typedef QPair<StringKey,ByteArrayValue> KeyValuePair;

class DynamicStorage: public Storage
{
public:
    DynamicStorage();

    virtual void writeItem(Key *key, Value *val);
    virtual Value *readItem(Key *key);
    virtual void removeItem(Key *key);
    virtual void clear();
    virtual bool keyExists(Key *key) = 0;
private:
    QList<KeyValuePair> storage;
};

#endif // DYNAMIC_STORAGE_H
