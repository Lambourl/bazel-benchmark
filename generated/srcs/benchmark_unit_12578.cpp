#include "bench/fib.hpp"

// RE Benchmark TU 12578 of 20000 (depth=28, stamp="default")
namespace bench_tu_12578 {
constexpr unsigned long long result = ::bench::slow_fib<28, 12578>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_12578
