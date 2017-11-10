/**
 * Autogenerated by Thrift Compiler (0.10.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef alpha_trade_TYPES_H
#define alpha_trade_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/TBase.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/cxxfunctional.h>




class HoldingStock;

class AccountBalance;

class OrderState;

class LiveTradeLoginResp;

class LiveTradeLogoutResp;

class GetAccountStateResp;

class GetAccountBalanceResp;

class GetHoldingStockResp;

class GetAllOrderResp;

class GetOrderStateResp;

class CloseOrderResp;

class CancelOrderResp;

class PlaceOrderResp;

typedef struct _HoldingStock__isset {
  _HoldingStock__isset() : stock_id(false), buy_price(false), long_short(false), quant(false), quant_sellable(false) {}
  bool stock_id :1;
  bool buy_price :1;
  bool long_short :1;
  bool quant :1;
  bool quant_sellable :1;
} _HoldingStock__isset;

class HoldingStock : public virtual ::apache::thrift::TBase {
 public:

  HoldingStock(const HoldingStock&);
  HoldingStock& operator=(const HoldingStock&);
  HoldingStock() : stock_id(), buy_price(0), long_short(), quant(0), quant_sellable(0) {
  }

  virtual ~HoldingStock() throw();
  std::string stock_id;
  double buy_price;
  std::string long_short;
  double quant;
  double quant_sellable;

  _HoldingStock__isset __isset;

  void __set_stock_id(const std::string& val);

  void __set_buy_price(const double val);

  void __set_long_short(const std::string& val);

  void __set_quant(const double val);

  void __set_quant_sellable(const double val);

  bool operator == (const HoldingStock & rhs) const
  {
    if (!(stock_id == rhs.stock_id))
      return false;
    if (!(buy_price == rhs.buy_price))
      return false;
    if (!(long_short == rhs.long_short))
      return false;
    if (!(quant == rhs.quant))
      return false;
    if (!(quant_sellable == rhs.quant_sellable))
      return false;
    return true;
  }
  bool operator != (const HoldingStock &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const HoldingStock & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(HoldingStock &a, HoldingStock &b);

inline std::ostream& operator<<(std::ostream& out, const HoldingStock& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _AccountBalance__isset {
  _AccountBalance__isset() : total_value(false), money_left(false) {}
  bool total_value :1;
  bool money_left :1;
} _AccountBalance__isset;

class AccountBalance : public virtual ::apache::thrift::TBase {
 public:

  AccountBalance(const AccountBalance&);
  AccountBalance& operator=(const AccountBalance&);
  AccountBalance() : total_value(0), money_left(0) {
  }

  virtual ~AccountBalance() throw();
  double total_value;
  double money_left;

  _AccountBalance__isset __isset;

  void __set_total_value(const double val);

  void __set_money_left(const double val);

  bool operator == (const AccountBalance & rhs) const
  {
    if (!(total_value == rhs.total_value))
      return false;
    if (!(money_left == rhs.money_left))
      return false;
    return true;
  }
  bool operator != (const AccountBalance &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const AccountBalance & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(AccountBalance &a, AccountBalance &b);

inline std::ostream& operator<<(std::ostream& out, const AccountBalance& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _OrderState__isset {
  _OrderState__isset() : order_id(false), time(false), sid(false), internal_order_id(false), operation(false), direction(false), price(false), quant(false), deal_quant(false), deal_price(false), state(false), desc(false) {}
  bool order_id :1;
  bool time :1;
  bool sid :1;
  bool internal_order_id :1;
  bool operation :1;
  bool direction :1;
  bool price :1;
  bool quant :1;
  bool deal_quant :1;
  bool deal_price :1;
  bool state :1;
  bool desc :1;
} _OrderState__isset;

class OrderState : public virtual ::apache::thrift::TBase {
 public:

  OrderState(const OrderState&);
  OrderState& operator=(const OrderState&);
  OrderState() : order_id(), time(), sid(), internal_order_id(), operation(), direction(), price(0), quant(0), deal_quant(0), deal_price(0), state(), desc() {
  }

  virtual ~OrderState() throw();
  std::string order_id;
  std::string time;
  std::string sid;
  std::string internal_order_id;
  std::string operation;
  std::string direction;
  double price;
  double quant;
  double deal_quant;
  double deal_price;
  std::string state;
  std::string desc;

  _OrderState__isset __isset;

  void __set_order_id(const std::string& val);

  void __set_time(const std::string& val);

  void __set_sid(const std::string& val);

  void __set_internal_order_id(const std::string& val);

  void __set_operation(const std::string& val);

  void __set_direction(const std::string& val);

  void __set_price(const double val);

  void __set_quant(const double val);

  void __set_deal_quant(const double val);

  void __set_deal_price(const double val);

  void __set_state(const std::string& val);

  void __set_desc(const std::string& val);

  bool operator == (const OrderState & rhs) const
  {
    if (!(order_id == rhs.order_id))
      return false;
    if (!(time == rhs.time))
      return false;
    if (!(sid == rhs.sid))
      return false;
    if (!(internal_order_id == rhs.internal_order_id))
      return false;
    if (!(operation == rhs.operation))
      return false;
    if (!(direction == rhs.direction))
      return false;
    if (!(price == rhs.price))
      return false;
    if (!(quant == rhs.quant))
      return false;
    if (!(deal_quant == rhs.deal_quant))
      return false;
    if (!(deal_price == rhs.deal_price))
      return false;
    if (!(state == rhs.state))
      return false;
    if (!(desc == rhs.desc))
      return false;
    return true;
  }
  bool operator != (const OrderState &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const OrderState & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(OrderState &a, OrderState &b);

inline std::ostream& operator<<(std::ostream& out, const OrderState& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _LiveTradeLoginResp__isset {
  _LiveTradeLoginResp__isset() : ret_code(false), result(false) {}
  bool ret_code :1;
  bool result :1;
} _LiveTradeLoginResp__isset;

class LiveTradeLoginResp : public virtual ::apache::thrift::TBase {
 public:

  LiveTradeLoginResp(const LiveTradeLoginResp&);
  LiveTradeLoginResp& operator=(const LiveTradeLoginResp&);
  LiveTradeLoginResp() : ret_code(0), result() {
  }

  virtual ~LiveTradeLoginResp() throw();
  int32_t ret_code;
  std::string result;

  _LiveTradeLoginResp__isset __isset;

  void __set_ret_code(const int32_t val);

  void __set_result(const std::string& val);

  bool operator == (const LiveTradeLoginResp & rhs) const
  {
    if (!(ret_code == rhs.ret_code))
      return false;
    if (!(result == rhs.result))
      return false;
    return true;
  }
  bool operator != (const LiveTradeLoginResp &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const LiveTradeLoginResp & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(LiveTradeLoginResp &a, LiveTradeLoginResp &b);

inline std::ostream& operator<<(std::ostream& out, const LiveTradeLoginResp& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _LiveTradeLogoutResp__isset {
  _LiveTradeLogoutResp__isset() : ret_code(false) {}
  bool ret_code :1;
} _LiveTradeLogoutResp__isset;

class LiveTradeLogoutResp : public virtual ::apache::thrift::TBase {
 public:

  LiveTradeLogoutResp(const LiveTradeLogoutResp&);
  LiveTradeLogoutResp& operator=(const LiveTradeLogoutResp&);
  LiveTradeLogoutResp() : ret_code(0) {
  }

  virtual ~LiveTradeLogoutResp() throw();
  int32_t ret_code;

  _LiveTradeLogoutResp__isset __isset;

  void __set_ret_code(const int32_t val);

  bool operator == (const LiveTradeLogoutResp & rhs) const
  {
    if (!(ret_code == rhs.ret_code))
      return false;
    return true;
  }
  bool operator != (const LiveTradeLogoutResp &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const LiveTradeLogoutResp & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(LiveTradeLogoutResp &a, LiveTradeLogoutResp &b);

inline std::ostream& operator<<(std::ostream& out, const LiveTradeLogoutResp& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _GetAccountStateResp__isset {
  _GetAccountStateResp__isset() : ret_code(false), state(false), desc(false) {}
  bool ret_code :1;
  bool state :1;
  bool desc :1;
} _GetAccountStateResp__isset;

class GetAccountStateResp : public virtual ::apache::thrift::TBase {
 public:

  GetAccountStateResp(const GetAccountStateResp&);
  GetAccountStateResp& operator=(const GetAccountStateResp&);
  GetAccountStateResp() : ret_code(0), state(), desc() {
  }

  virtual ~GetAccountStateResp() throw();
  int32_t ret_code;
  std::string state;
  std::string desc;

  _GetAccountStateResp__isset __isset;

  void __set_ret_code(const int32_t val);

  void __set_state(const std::string& val);

  void __set_desc(const std::string& val);

  bool operator == (const GetAccountStateResp & rhs) const
  {
    if (!(ret_code == rhs.ret_code))
      return false;
    if (!(state == rhs.state))
      return false;
    if (!(desc == rhs.desc))
      return false;
    return true;
  }
  bool operator != (const GetAccountStateResp &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const GetAccountStateResp & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(GetAccountStateResp &a, GetAccountStateResp &b);

inline std::ostream& operator<<(std::ostream& out, const GetAccountStateResp& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _GetAccountBalanceResp__isset {
  _GetAccountBalanceResp__isset() : ret_code(false), result(false) {}
  bool ret_code :1;
  bool result :1;
} _GetAccountBalanceResp__isset;

class GetAccountBalanceResp : public virtual ::apache::thrift::TBase {
 public:

  GetAccountBalanceResp(const GetAccountBalanceResp&);
  GetAccountBalanceResp& operator=(const GetAccountBalanceResp&);
  GetAccountBalanceResp() : ret_code(0) {
  }

  virtual ~GetAccountBalanceResp() throw();
  int32_t ret_code;
  AccountBalance result;

  _GetAccountBalanceResp__isset __isset;

  void __set_ret_code(const int32_t val);

  void __set_result(const AccountBalance& val);

  bool operator == (const GetAccountBalanceResp & rhs) const
  {
    if (!(ret_code == rhs.ret_code))
      return false;
    if (!(result == rhs.result))
      return false;
    return true;
  }
  bool operator != (const GetAccountBalanceResp &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const GetAccountBalanceResp & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(GetAccountBalanceResp &a, GetAccountBalanceResp &b);

inline std::ostream& operator<<(std::ostream& out, const GetAccountBalanceResp& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _GetHoldingStockResp__isset {
  _GetHoldingStockResp__isset() : ret_code(false), result(false) {}
  bool ret_code :1;
  bool result :1;
} _GetHoldingStockResp__isset;

class GetHoldingStockResp : public virtual ::apache::thrift::TBase {
 public:

  GetHoldingStockResp(const GetHoldingStockResp&);
  GetHoldingStockResp& operator=(const GetHoldingStockResp&);
  GetHoldingStockResp() : ret_code(0) {
  }

  virtual ~GetHoldingStockResp() throw();
  int32_t ret_code;
  std::vector<HoldingStock>  result;

  _GetHoldingStockResp__isset __isset;

  void __set_ret_code(const int32_t val);

  void __set_result(const std::vector<HoldingStock> & val);

  bool operator == (const GetHoldingStockResp & rhs) const
  {
    if (!(ret_code == rhs.ret_code))
      return false;
    if (!(result == rhs.result))
      return false;
    return true;
  }
  bool operator != (const GetHoldingStockResp &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const GetHoldingStockResp & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(GetHoldingStockResp &a, GetHoldingStockResp &b);

inline std::ostream& operator<<(std::ostream& out, const GetHoldingStockResp& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _GetAllOrderResp__isset {
  _GetAllOrderResp__isset() : ret_code(false), result(false) {}
  bool ret_code :1;
  bool result :1;
} _GetAllOrderResp__isset;

class GetAllOrderResp : public virtual ::apache::thrift::TBase {
 public:

  GetAllOrderResp(const GetAllOrderResp&);
  GetAllOrderResp& operator=(const GetAllOrderResp&);
  GetAllOrderResp() : ret_code(0) {
  }

  virtual ~GetAllOrderResp() throw();
  int32_t ret_code;
  std::vector<OrderState>  result;

  _GetAllOrderResp__isset __isset;

  void __set_ret_code(const int32_t val);

  void __set_result(const std::vector<OrderState> & val);

  bool operator == (const GetAllOrderResp & rhs) const
  {
    if (!(ret_code == rhs.ret_code))
      return false;
    if (!(result == rhs.result))
      return false;
    return true;
  }
  bool operator != (const GetAllOrderResp &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const GetAllOrderResp & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(GetAllOrderResp &a, GetAllOrderResp &b);

inline std::ostream& operator<<(std::ostream& out, const GetAllOrderResp& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _GetOrderStateResp__isset {
  _GetOrderStateResp__isset() : ret_code(false), result(false) {}
  bool ret_code :1;
  bool result :1;
} _GetOrderStateResp__isset;

class GetOrderStateResp : public virtual ::apache::thrift::TBase {
 public:

  GetOrderStateResp(const GetOrderStateResp&);
  GetOrderStateResp& operator=(const GetOrderStateResp&);
  GetOrderStateResp() : ret_code(0) {
  }

  virtual ~GetOrderStateResp() throw();
  int32_t ret_code;
  OrderState result;

  _GetOrderStateResp__isset __isset;

  void __set_ret_code(const int32_t val);

  void __set_result(const OrderState& val);

  bool operator == (const GetOrderStateResp & rhs) const
  {
    if (!(ret_code == rhs.ret_code))
      return false;
    if (!(result == rhs.result))
      return false;
    return true;
  }
  bool operator != (const GetOrderStateResp &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const GetOrderStateResp & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(GetOrderStateResp &a, GetOrderStateResp &b);

inline std::ostream& operator<<(std::ostream& out, const GetOrderStateResp& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _CloseOrderResp__isset {
  _CloseOrderResp__isset() : ret_code(false) {}
  bool ret_code :1;
} _CloseOrderResp__isset;

class CloseOrderResp : public virtual ::apache::thrift::TBase {
 public:

  CloseOrderResp(const CloseOrderResp&);
  CloseOrderResp& operator=(const CloseOrderResp&);
  CloseOrderResp() : ret_code(0) {
  }

  virtual ~CloseOrderResp() throw();
  int32_t ret_code;

  _CloseOrderResp__isset __isset;

  void __set_ret_code(const int32_t val);

  bool operator == (const CloseOrderResp & rhs) const
  {
    if (!(ret_code == rhs.ret_code))
      return false;
    return true;
  }
  bool operator != (const CloseOrderResp &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CloseOrderResp & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(CloseOrderResp &a, CloseOrderResp &b);

inline std::ostream& operator<<(std::ostream& out, const CloseOrderResp& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _CancelOrderResp__isset {
  _CancelOrderResp__isset() : ret_code(false) {}
  bool ret_code :1;
} _CancelOrderResp__isset;

class CancelOrderResp : public virtual ::apache::thrift::TBase {
 public:

  CancelOrderResp(const CancelOrderResp&);
  CancelOrderResp& operator=(const CancelOrderResp&);
  CancelOrderResp() : ret_code(0) {
  }

  virtual ~CancelOrderResp() throw();
  int32_t ret_code;

  _CancelOrderResp__isset __isset;

  void __set_ret_code(const int32_t val);

  bool operator == (const CancelOrderResp & rhs) const
  {
    if (!(ret_code == rhs.ret_code))
      return false;
    return true;
  }
  bool operator != (const CancelOrderResp &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CancelOrderResp & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(CancelOrderResp &a, CancelOrderResp &b);

inline std::ostream& operator<<(std::ostream& out, const CancelOrderResp& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _PlaceOrderResp__isset {
  _PlaceOrderResp__isset() : ret_code(false), result(false) {}
  bool ret_code :1;
  bool result :1;
} _PlaceOrderResp__isset;

class PlaceOrderResp : public virtual ::apache::thrift::TBase {
 public:

  PlaceOrderResp(const PlaceOrderResp&);
  PlaceOrderResp& operator=(const PlaceOrderResp&);
  PlaceOrderResp() : ret_code(0), result() {
  }

  virtual ~PlaceOrderResp() throw();
  int32_t ret_code;
  std::string result;

  _PlaceOrderResp__isset __isset;

  void __set_ret_code(const int32_t val);

  void __set_result(const std::string& val);

  bool operator == (const PlaceOrderResp & rhs) const
  {
    if (!(ret_code == rhs.ret_code))
      return false;
    if (!(result == rhs.result))
      return false;
    return true;
  }
  bool operator != (const PlaceOrderResp &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const PlaceOrderResp & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(PlaceOrderResp &a, PlaceOrderResp &b);

inline std::ostream& operator<<(std::ostream& out, const PlaceOrderResp& obj)
{
  obj.printTo(out);
  return out;
}



#endif