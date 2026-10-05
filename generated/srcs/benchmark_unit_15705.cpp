#include "bench/fib.hpp"

// RE Benchmark TU 15705 of 20000 (depth=28, stamp="default")
namespace bench_tu_15705 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15705>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15705
