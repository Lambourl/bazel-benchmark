#include "bench/fib.hpp"

// RE Benchmark TU 3412 of 20000 (depth=28, stamp="default")
namespace bench_tu_3412 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3412>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3412
