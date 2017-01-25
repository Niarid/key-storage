#ifndef STRINGKEY_H
#define STRINGKEY_H

#include "interface.h"
#include "QString"

class StringKey: public Key
{
public:
    StringKey();
    StringKey(Key *key);

    virtual void setKey(const char *data);
    virtual void getKey(char *key);

    void setKey(QString key);
    QString getKey();

    bool operator==(StringKey &key);
private:
    QString keyData;
};

#endif // STRINGKEY_H
