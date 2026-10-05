#include "bench/fib.hpp"

// RE Benchmark TU 5754 of 20000 (depth=28, stamp="default")
namespace bench_tu_5754 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5754>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5754
