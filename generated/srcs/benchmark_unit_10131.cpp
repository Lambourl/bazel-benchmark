#include "bench/fib.hpp"

// RE Benchmark TU 10131 of 20000 (depth=28, stamp="default")
namespace bench_tu_10131 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10131>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10131
