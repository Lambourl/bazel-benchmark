#include "bench/fib.hpp"

// RE Benchmark TU 4983 of 20000 (depth=28, stamp="default")
namespace bench_tu_4983 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4983>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4983
