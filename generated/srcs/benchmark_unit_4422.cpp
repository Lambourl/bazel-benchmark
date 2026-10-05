#include "bench/fib.hpp"

// RE Benchmark TU 4422 of 20000 (depth=28, stamp="default")
namespace bench_tu_4422 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4422>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4422
