#include "bench/fib.hpp"

// RE Benchmark TU 4329 of 20000 (depth=28, stamp="default")
namespace bench_tu_4329 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4329>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4329
