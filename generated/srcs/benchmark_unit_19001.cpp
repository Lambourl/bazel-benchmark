#include "bench/fib.hpp"

// RE Benchmark TU 19001 of 20000 (depth=28, stamp="default")
namespace bench_tu_19001 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19001>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19001
