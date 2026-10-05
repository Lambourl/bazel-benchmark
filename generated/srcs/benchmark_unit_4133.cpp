#include "bench/fib.hpp"

// RE Benchmark TU 4133 of 20000 (depth=28, stamp="default")
namespace bench_tu_4133 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4133>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4133
