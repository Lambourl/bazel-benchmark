#include "bench/fib.hpp"

// RE Benchmark TU 5214 of 20000 (depth=28, stamp="default")
namespace bench_tu_5214 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5214>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5214
