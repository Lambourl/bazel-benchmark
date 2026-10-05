#include "bench/fib.hpp"

// RE Benchmark TU 6153 of 20000 (depth=28, stamp="default")
namespace bench_tu_6153 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6153>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6153
