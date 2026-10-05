#include "bench/fib.hpp"

// RE Benchmark TU 3133 of 20000 (depth=28, stamp="default")
namespace bench_tu_3133 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3133>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3133
