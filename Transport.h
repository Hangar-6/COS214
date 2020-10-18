//
// Created by user-pc on 2020/10/17.
//

#ifndef COS214_TRANSPORT_H
#define COS214_TRANSPORT_H

class Transport {
private:
  string TransportName;
  final string TransportType;

public:
  Transport(string name);
  string getName();
  void setName();
  virtual string getType()=0;
  virtual void executeTransport()=0;
};


#endif //COS214_TRANSPORT_H
