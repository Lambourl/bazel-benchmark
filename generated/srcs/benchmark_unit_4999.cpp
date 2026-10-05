#include "bench/fib.hpp"

// RE Benchmark TU 4999 of 20000 (depth=28, stamp="default")
namespace bench_tu_4999 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4999>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4999
