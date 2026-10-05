#include "bench/fib.hpp"

// RE Benchmark TU 13325 of 20000 (depth=28, stamp="default")
namespace bench_tu_13325 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13325>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13325
