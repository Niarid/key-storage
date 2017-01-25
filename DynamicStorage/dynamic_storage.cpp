#include "dynamic_storage.h"

DynamicStorage::DynamicStorage()
{

}

void DynamicStorage::writeItem(Key *key, Value *val)
{
    if (keyExists(key))
        return; //add execption

    StringKey strKey(key);
    ByteArrayValue baVal(val);

    storage.append(KeyValuePair(strKey, baVal));
}

Value *DynamicStorage::readItem(Key *key)
{
    StringKey strKey(key);

    foreach (KeyValuePair p, storage)
    {
        if (p.first == strKey)
        {
            ByteArrayValue *baVal = new ByteArrayValue();
            baVal->setVal(p.second.getVal());
            return static_cast<Value *>(baVal);
        }
    }
    return NULL; //add execption
}

void DynamicStorage::removeItem(Key *key)
{
    StringKey strKey(key);

    for (int i = 0; i < storage.size(); i++)
    {
        if (storage[i].first == strKey)
            storage.removeAt(i);
    }
    //add execption
}

void DynamicStorage::clear()
{
    storage.clear();
}

bool DynamicStorage::keyExists(Key *key)
{
    StringKey strKey(key);

    foreach (KeyValuePair p, storage)
    {
        if (p.first == strKey)
            return true;
    }
    return false;
}
