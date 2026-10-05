#include "bench/fib.hpp"

// RE Benchmark TU 11937 of 20000 (depth=28, stamp="default")
namespace bench_tu_11937 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11937>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11937
