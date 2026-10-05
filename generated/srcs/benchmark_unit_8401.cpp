#include "bench/fib.hpp"

// RE Benchmark TU 8401 of 20000 (depth=28, stamp="default")
namespace bench_tu_8401 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8401>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8401
