#include "bench/fib.hpp"

// RE Benchmark TU 18299 of 20000 (depth=28, stamp="default")
namespace bench_tu_18299 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18299>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18299
