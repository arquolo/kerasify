/*
 * Copyright (c) 2016 Robert W. Rose
 *
 * MIT License, see LICENSE file.
 */
#pragma once

#include "keras/layers/activation.h"

namespace keras {
namespace layers {

class Conv1D : public Layer {
public:
    Conv1D() {}
    ~Conv1D() override {}
    bool load_layer(std::ifstream* file) override;
    bool apply(const Tensor& in, Tensor& out) const override;

private:
    Tensor weights_;
    Tensor biases_;
    Activation activation_;
};

} // namespace layers
} // namespace keras
