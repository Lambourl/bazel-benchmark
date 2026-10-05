#include "bench/fib.hpp"

// RE Benchmark TU 937 of 20000 (depth=28, stamp="default")
namespace bench_tu_937 {
constexpr unsigned long long result = ::bench::slow_fib<28, 937>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_937
