#include "bench/fib.hpp"

// RE Benchmark TU 6821 of 20000 (depth=28, stamp="default")
namespace bench_tu_6821 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6821>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6821
