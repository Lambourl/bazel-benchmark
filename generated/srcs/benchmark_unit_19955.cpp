#include "bench/fib.hpp"

// RE Benchmark TU 19955 of 20000 (depth=28, stamp="default")
namespace bench_tu_19955 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19955>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19955
