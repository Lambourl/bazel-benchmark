#include "bench/fib.hpp"

// RE Benchmark TU 16244 of 20000 (depth=28, stamp="default")
namespace bench_tu_16244 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16244>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16244
