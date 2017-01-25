#ifndef INTERFACE_H
#define INTERFACE_H

class Value
{
public:
    virtual void setVal(const char *, int) = 0;
    virtual int getVal(char *) = 0;
    virtual bool isEmpty() = 0;
};

class Key
{
public:
    virtual void setKey(const char *) = 0;
    virtual void getKey(char *) = 0;
};

class Storage
{
    virtual void writeItem(Key*, Value*) = 0;
    virtual Value *readItem(Key*) = 0;
    virtual void removeItem(Key*) = 0;
    virtual void clear() = 0;
    virtual bool keyExists(Key*) = 0;
};

#endif // INTERFACE_H
