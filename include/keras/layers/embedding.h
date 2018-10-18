﻿/*
 * Copyright (c) 2016 Robert W. Rose, 2018 Paul Maevskikh
 *
 * MIT License, see LICENSE file.
 */
#pragma once

#include "keras/layer.h"

namespace keras {
namespace layers {

class Embedding final : public Layer {
public:
    void load(Stream& file) noexcept override;
    Tensor operator()(const Tensor& in) const noexcept override;

private:
    Tensor weights_;
};

} // namespace layers
} // namespace keras
