#include "bench/fib.hpp"

// RE Benchmark TU 6003 of 20000 (depth=28, stamp="default")
namespace bench_tu_6003 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6003>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6003
