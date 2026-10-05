#include "bench/fib.hpp"

// RE Benchmark TU 15191 of 20000 (depth=28, stamp="default")
namespace bench_tu_15191 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15191>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15191
