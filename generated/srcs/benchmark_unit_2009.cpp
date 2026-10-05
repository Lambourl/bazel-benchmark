#include "bench/fib.hpp"

// RE Benchmark TU 2009 of 20000 (depth=28, stamp="default")
namespace bench_tu_2009 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2009>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2009
