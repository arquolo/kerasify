﻿/*
 * Copyright (c) 2016 Robert W. Rose
 * Copyright (c) 2018 Paul Maevskikh
 *
 * MIT License, see LICENSE file.
 */
#pragma once

#include "keras/layer.h"

namespace keras {
namespace layers {

class MaxPooling2D final : public Layer<MaxPooling2D> {
    unsigned pool_size_y_{0};
    unsigned pool_size_x_{0};

public:
    MaxPooling2D(Stream& file);
    Tensor forward(const Tensor& in) const noexcept override;
};

} // namespace layers
} // namespace keras
