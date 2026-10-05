#include "bench/fib.hpp"

// RE Benchmark TU 17191 of 20000 (depth=28, stamp="default")
namespace bench_tu_17191 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17191>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17191
