#include "bench/fib.hpp"

// RE Benchmark TU 6887 of 20000 (depth=28, stamp="default")
namespace bench_tu_6887 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6887>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6887
