#include "bench/fib.hpp"

// RE Benchmark TU 2754 of 20000 (depth=28, stamp="default")
namespace bench_tu_2754 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2754>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2754
