#ifndef INCLUDE_TRANSFORMS_LOGISTIC_H_
#define INCLUDE_TRANSFORMS_LOGISTIC_H_

#include "transforms/activation.h"

namespace blitz {

template<template <typename> class TensorType, typename DType>
class Logistic : public Activation<TensorType, DType> {
 public:
  explicit Logistic(const bool short_cut = true) : short_cut_(short_cut) {}
  // indicate pure virtual
  ~Logistic() {}

  virtual void Apply(const shared_ptr<TensorType<DType> > input,
    shared_ptr<TensorType<DType> > output);

  virtual void Derivative(const shared_ptr<TensorType<DType> > input,
    shared_ptr<TensorType<DType> > output);

 private:
  const bool short_cut_;

  DISABLE_COPY_AND_ASSIGN(Logistic);
};

}  // namespace blitz

#endif  // INCLUDE_TRANSFORMS_LOGISTIC_H_
