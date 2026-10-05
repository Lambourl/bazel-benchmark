#include "bench/fib.hpp"

// RE Benchmark TU 14892 of 20000 (depth=28, stamp="default")
namespace bench_tu_14892 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14892>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14892
