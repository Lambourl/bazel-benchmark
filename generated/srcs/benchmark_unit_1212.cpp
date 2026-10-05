#include "bench/fib.hpp"

// RE Benchmark TU 1212 of 20000 (depth=28, stamp="default")
namespace bench_tu_1212 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1212>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1212
