#include "bench/fib.hpp"

// RE Benchmark TU 8012 of 20000 (depth=28, stamp="default")
namespace bench_tu_8012 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8012>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8012
