#ifndef OBJECT_H
#define OBJECT_H

#include "Debug.h"

#include <string>

class Object
{
public:
  virtual ~Object();

  virtual std::string ToString() const;
  virtual bool Equal(Object* other);
};

#endif
