#include "string_key.h"

StringKey::StringKey()
{

}

StringKey::StringKey(Key *key)
{
    char *keyData = new char[255];
    key->getKey(keyData);
    setKey(keyData);
    delete []keyData;
}

void StringKey::getKey(char *key)
{
    memcpy(key, keyData.toLatin1().data(), keyData.toLatin1().size());
}

void StringKey::setKey(QString key)
{
    keyData = key;
}

QString StringKey::getKey()
{
    return keyData;
}

bool StringKey::operator==(StringKey &key)
{
    return getKey() == key.getKey();
}

void StringKey::setKey(const char *data)
{
    keyData = QString(data);
}
