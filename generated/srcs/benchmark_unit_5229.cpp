#include "bench/fib.hpp"

// RE Benchmark TU 5229 of 20000 (depth=28, stamp="default")
namespace bench_tu_5229 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5229>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5229
