#include "bench/fib.hpp"

// RE Benchmark TU 5772 of 20000 (depth=28, stamp="default")
namespace bench_tu_5772 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5772>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5772
