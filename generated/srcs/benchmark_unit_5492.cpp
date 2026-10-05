#include "bench/fib.hpp"

// RE Benchmark TU 5492 of 20000 (depth=28, stamp="default")
namespace bench_tu_5492 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5492>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5492
