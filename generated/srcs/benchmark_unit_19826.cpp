#include "bench/fib.hpp"

// RE Benchmark TU 19826 of 20000 (depth=28, stamp="default")
namespace bench_tu_19826 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19826>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19826
