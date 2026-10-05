#include "bench/fib.hpp"

// RE Benchmark TU 19759 of 20000 (depth=28, stamp="default")
namespace bench_tu_19759 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19759>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19759
