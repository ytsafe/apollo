/******************************************************************************
 * Copyright 2017 The Apollo Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/

/**
 * @file polynomial_curve1d.h
 **/

#ifndef MODULES_PLANNING_MATH_CURVE1D_POLYNOMIAL_CURVE1D_H_
#define MODULES_PLANNING_MATH_CURVE1D_POLYNOMIAL_CURVE1D_H_

#include "modules/planning/math/curve1d/curve1d.h"

namespace apollo {
namespace planning {

class PolynomialCurve1d : public Curve1d {
 public:
  PolynomialCurve1d() = default;

  virtual ~PolynomialCurve1d() = default;
};

}  // namespace planning
}  // namespace apollo

#endif /* MODULES_PLANNING_MATH_CURVE1D_POLYNOMIAL_CURVE1D_H_ */
