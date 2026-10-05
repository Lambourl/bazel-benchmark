#include "bench/fib.hpp"

// RE Benchmark TU 6043 of 20000 (depth=28, stamp="default")
namespace bench_tu_6043 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6043>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6043
