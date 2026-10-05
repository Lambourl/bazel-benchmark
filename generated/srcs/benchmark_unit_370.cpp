#include "bench/fib.hpp"

// RE Benchmark TU 370 of 20000 (depth=28, stamp="default")
namespace bench_tu_370 {
constexpr unsigned long long result = ::bench::slow_fib<28, 370>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_370
