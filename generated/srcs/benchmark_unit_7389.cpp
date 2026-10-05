#include "bench/fib.hpp"

// RE Benchmark TU 7389 of 20000 (depth=28, stamp="default")
namespace bench_tu_7389 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7389>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7389
