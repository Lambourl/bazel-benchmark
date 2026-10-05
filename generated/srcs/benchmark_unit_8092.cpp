#include "bench/fib.hpp"

// RE Benchmark TU 8092 of 20000 (depth=28, stamp="default")
namespace bench_tu_8092 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8092>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8092
