#include "bench/fib.hpp"

// RE Benchmark TU 87 of 20000 (depth=28, stamp="default")
namespace bench_tu_87 {
constexpr unsigned long long result = ::bench::slow_fib<28, 87>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_87
