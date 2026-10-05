#include "bench/fib.hpp"

// RE Benchmark TU 51 of 20000 (depth=28, stamp="default")
namespace bench_tu_51 {
constexpr unsigned long long result = ::bench::slow_fib<28, 51>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_51
