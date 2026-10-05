#include "bench/fib.hpp"

// RE Benchmark TU 8491 of 20000 (depth=28, stamp="default")
namespace bench_tu_8491 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8491>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8491
