/*
 * Copyright (c) 2018-2020 Arm Limited.
 *
 * SPDX-License-Identifier: MIT
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to
 * deal in the Software without restriction, including without limitation the
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */
#ifndef ARM_COMPUTE_UTILS_REQUIRES_H
#define ARM_COMPUTE_UTILS_REQUIRES_H

namespace arm_compute
{
namespace utils
{
namespace requires
{
// *INDENT-OFF*
// clang-format off
namespace detail
{
enum class enabler
{
};
} // namespace arm_compute

/** Requirements as template */
#define REQUIRES_T(...) template <bool Cond = (__VA_ARGS__), typename std::enable_if<Cond, int>::type = 0>
/** Requirements as template argument */
#define REQUIRES_TA(...) typename = typename std::enable_if<(__VA_ARGS__), arm_compute::utils::requires::detail::enabler>::type
// clang-format on
// *INDENT-ON*
} // namespace requires
} // namespace utils
} // namespace arm_compute
#endif /*ARM_COMPUTE_UTILS_REQUIRES_H */
